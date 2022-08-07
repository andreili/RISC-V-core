`timescale 1 ns / 1 ps

module rv_core
#(
    parameter   RESET_ADDR = 32'h0000_0000
)
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    //
    output  wire[31:0]                  o_wb_adr,
    output  wire[31:0]                  o_wb_dat,
    input   wire[31:0]                  i_wb_dat,
    output  wire                        o_wb_we,
    output  wire[3:0]                   o_wb_sel,
    output  wire                        o_wb_stb,
    input   wire                        i_wb_ack,
    output  wire                        o_wb_cyc
);

    localparam  STAGE_FETCH             = 3'h1;
    localparam  STAGE_DECODE            = 3'h2;
    localparam  STAGE_EXECUTE           = 3'h3;
    localparam  STAGE_MEMORY            = 3'h4;
    localparam  STAGE_WRITE             = 3'h5;

    reg [31:2]  r_pc;
    wire[31:2]  w_pc_next;
    wire[31:2]  w_addr_out;

    reg[2:0]    r_stage;
    reg[2:0]    r_stage_next;

    assign w_pc_next = (r_stage == STAGE_DECODE) ? (r_pc + 1'b1) :
                       r_pc;

    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_pc <= RESET_ADDR[31:2];
        else
            r_pc <= w_pc_next;
    end

    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_stage <= STAGE_FETCH;
        else
            r_stage <= r_stage_next;
    end

    always_comb
    begin : next_stage
        (* full_case *)
        case (r_stage)
            STAGE_FETCH:    r_stage_next = (i_wb_ack) ? STAGE_DECODE : STAGE_FETCH;
            STAGE_DECODE:   r_stage_next = STAGE_FETCH;
            STAGE_EXECUTE:  r_stage_next = STAGE_FETCH;
            STAGE_MEMORY:   r_stage_next = STAGE_FETCH;
            STAGE_WRITE:    r_stage_next = STAGE_FETCH;
            default:        r_stage_next = STAGE_FETCH;
        endcase
    end

    reg[3:0]    r_sel;
    reg[3:0]    r_sel_next;
    assign r_sel_next = '1;
    always_ff @(posedge i_clk)
        r_sel <= r_sel_next;

    reg     r_stb;
    reg     r_stb_next;
    assign r_stb_next = (r_stage_next == STAGE_FETCH) ? '1 :
                        '0;
    always_ff @(posedge i_clk)
        r_stb <= r_stb_next;

    reg     r_cyc;
    reg     r_cyc_next;
    assign r_cyc_next = (r_stage_next == STAGE_FETCH) ? '1 :
                        '0;
    always_ff @(posedge i_clk)
        r_cyc <= r_cyc_next;

/* ---- FETCH MODULE --- */
    reg[31:0]   r_fetch_instr;
    always_ff @(posedge i_clk)
    begin
        if ((r_stage == STAGE_FETCH) & i_wb_ack)
        begin
            r_fetch_instr <= i_wb_dat;
        end
    end
/* --------------------- */

/* ---- DECODE MODULE --- */
    wire[6:0]   w_instr_op              = r_fetch_instr[6:0];
    wire[4:0]   w_instr_r_rd            = r_fetch_instr[11:7];
    wire[2:0]   w_instr_r_funct3        = r_fetch_instr[14:12];
    wire[4:0]   w_instr_r_rs1           = r_fetch_instr[19:15];
    wire[4:0]   w_instr_r_rs2           = r_fetch_instr[24:20];
    wire[6:0]   w_instr_r_funct7        = r_fetch_instr[31:25];
    wire[31:0]  w_instr_i_imm           = { {21{r_fetch_instr[31]}},
                                            r_fetch_instr[30:20] };
    wire[31:0]  w_instr_s_imm           = { {21{r_fetch_instr[31]}},
                                            r_fetch_instr[30:25],
                                            r_fetch_instr[11:7] };
    wire[31:0]  w_instr_b_imm           = { {20{r_fetch_instr[31]}},
                                            r_fetch_instr[7],
                                            r_fetch_instr[30:25],
                                            r_fetch_instr[11:8],
                                            1'b0 };
    wire[31:0]  w_instr_u_imm           = { r_fetch_instr[31:12],
                                            {12{1'b0}} };
    wire[19:0]  w_instr_j_imm           = { r_fetch_instr[31],
                                            r_fetch_instr[19:12],
                                            r_fetch_instr[20],
                                            r_fetch_instr[30:21] };
/* --------------------- */

    assign w_addr_out = r_pc;

    assign  o_wb_adr = { w_addr_out, 2'b00 };
    assign  o_wb_dat = '0;
    assign  o_wb_we = '0;
    assign  o_wb_sel = r_sel;
    assign  o_wb_stb = r_stb;
    assign  o_wb_cyc = r_cyc;

endmodule
