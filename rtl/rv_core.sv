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
    localparam  STAGE_MEMORY1           = 3'h4;
    localparam  STAGE_MEMORY2           = 3'h5;
    localparam  STAGE_WRITE             = 3'h6;

    wire    w_fetch_stall;
    wire    w_decode_stall = 1'b0;
    wire    w_decode_flush;
    reg         r_write_pc_src = '0;
    reg[31:2]   r_write_pc_target = '0;
    wire    w_exec_flush = 1'b0;

    wire[31:2]  w_fetch_pc;
    wire[31:2]  w_fetch_pc_p4;
    wire[4:0]   w_decode_rs1, w_decode_rs2, w_decode_rd;
    wire[31:0]  w_reg_data1, w_reg_data2;
    
    wire[31:2]  w_decode_pc;
    wire[31:2]  w_decode_pc_p4;
    wire[31:0]  w_decode_imm;
    wire        w_decode_reg_write;
    wire        w_decode_mem_read;
    wire        w_decode_mem_write;
    wire[1:0]   w_decode_res_src;
    wire        w_decode_jump;
    wire        w_decode_branch;
    wire        w_decode_alu_src;
    wire[2:0]   w_decode_funct3;
    wire[2:0]   w_decode_alu_ctrl;

    // staged core workarround
    wire    w_pre_stall = !((r_stage == STAGE_WRITE) && (r_stage_next == STAGE_FETCH));
    assign  w_decode_flush = !((r_stage == STAGE_FETCH) && (r_stage_next == STAGE_DECODE));

    rv_fetch
    #(
        .RESET_ADDR                     (RESET_ADDR)
    )
    u_st1_fetch
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_stall                        (w_fetch_stall),
        .i_pc_sel                       (r_write_pc_src),
        .i_pc_target                    (r_write_pc_target),
        .i_bus_ack                      (i_wb_ack),
        .i_bus_rdata                    (i_wb_dat),
        .i_pre_stall                    (w_pre_stall),
        .o_pc                           (w_fetch_pc),
        .o_pc_p4                        (w_fetch_pc_p4)
    );

    rv_decode
    u_st2_decode
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_stall                        (w_decode_stall),
        .i_flush                        (w_decode_flush),
        .i_bus_ack                      (i_wb_ack),
        .i_data                         (i_wb_dat),
        .i_pc                           (w_fetch_pc),
        .i_pc_p4                        (w_fetch_pc_p4),
        .o_rs1                          (w_decode_rs1),
        .o_rs2                          (w_decode_rs2),
        .o_rd                           (w_decode_rd),
        .o_pc                           (w_decode_pc),
        .o_pc_p4                        (w_decode_pc_p4),
        .o_imm                          (w_decode_imm),
        .o_reg_write                    (w_decode_reg_write),
        .o_mem_read                     (w_decode_mem_read),
        .o_mem_write                    (w_decode_mem_write),
        .o_res_src                      (w_decode_res_src),
        .o_jump                         (w_decode_jump),
        .o_branch                       (w_decode_branch),
        .o_alu_src                      (w_decode_alu_src),
        .o_funct3                       (w_decode_funct3),
        .o_alu_ctrl                     (w_decode_alu_ctrl)
    );

    rv_exec
    u_st3_exec
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_flush                        (w_exec_flush),
        .i_pc                           (w_decode_pc),
        .i_pc_p4                        (w_decode_pc_p4),
        .i_rs1_val                      (w_reg_data1),
        .i_rs2_val                      (w_reg_data2),
        .i_rs1                          (w_decode_rs1),
        .i_rs2                          (w_decode_rs2),
        .i_rd                           (w_decode_rd),
        .i_imm                          (w_decode_imm),
        .i_reg_write                    (w_decode_reg_write),
        .i_mem_read                     (w_decode_mem_read),
        .i_mem_write                    (w_decode_mem_write),
        .i_res_src                      (w_decode_res_src),
        .i_jump                         (w_decode_jump),
        .i_branch                       (w_decode_branch),
        .i_alu_src                      (w_decode_alu_src),
        .i_funct3                       (w_decode_funct3),
        .i_alu_ctrl                     (w_decode_alu_ctrl)
    );

    //regfile
    reg[31:0]   r_reg_file[31:1];

    assign w_reg_data1 = (|w_decode_rs1) ? r_reg_file[w_decode_rs1] : '0;
    assign w_reg_data2 = (|w_decode_rs2) ? r_reg_file[w_decode_rs2] : '0;
`ifdef FGFGFFF

/* --- MEMORY MODULE --- */
    reg[31:0]   r_memory_alu;
    reg         r_memory_reg_write;
    reg         r_memory_read;
    reg         r_memory_write;
    reg[31:0]   r_memory_wdata;
    reg[31:0]   r_memory_wdata_shuffled;
    reg[1:0]    r_memory_res_src;
    reg[4:0]    r_memory_rd;
    reg[31:2]   r_memory_pc_p4;
    reg         r_memory_pc_src;
    reg[31:2]   r_memory_pc_target;
    reg[2:0]    r_memory_funct3;
    reg[3:0]    r_memory_mem_sel;
    
    always_ff @(posedge i_clk)
    begin
        r_memory_alu <= w_exec_alu_result;
        r_memory_reg_write <= r_exec_reg_write;
        r_memory_read <= r_exec_mem_read;
        r_memory_write <= r_exec_mem_write;
        r_memory_res_src <= r_exec_res_src;
        r_memory_rd <= r_exec_rd;
        r_memory_pc_p4 <= r_exec_pc_p4;
        r_memory_pc_src <= w_exec_pc_src;
        r_memory_pc_target <= w_exec_pc_target;
        r_memory_funct3 <= r_exec_funct3;
        r_memory_wdata <= r_exec_rs2_val;
    end

    always_comb
    begin
        case (r_memory_funct3[1:0])
        2'b00:   r_memory_wdata_shuffled = {4{r_memory_wdata[0+: 8]}};
        2'b01:   r_memory_wdata_shuffled = {2{r_memory_wdata[0+:16]}};
        default: r_memory_wdata_shuffled = r_memory_wdata;
        endcase
    end

    always_comb
    begin
        case (r_memory_funct3[1:0])
        2'b00: begin
            case (r_memory_alu[1:0])
            2'b00: r_memory_mem_sel = 4'b0001;
            2'b01: r_memory_mem_sel = 4'b0010;
            2'b10: r_memory_mem_sel = 4'b0100;
            2'b11: r_memory_mem_sel = 4'b1000;
            endcase
        end
        2'b01: begin
            case (r_memory_alu[1])
            1'b0: r_memory_mem_sel = 4'b0011;
            1'b1: r_memory_mem_sel = 4'b1100;
            endcase
        end
        default:  r_memory_mem_sel = 4'b1111;
        endcase
    end

/* --------------------- */

/* --- MEMORY2 MODULE -- */
    reg[31:0]   r_memory2_alu;
    reg         r_memory2_reg_write;
    reg         r_memory2_read;
    reg         r_memory2_write;
    reg[1:0]    r_memory2_res_src;
    reg[4:0]    r_memory2_rd;
    reg[31:2]   r_memory2_pc_p4;
    wire[31:0]  w_memory2_data;
    reg         r_memory2_pc_src;
    reg[31:2]   r_memory2_pc_target;
    reg[2:0]    r_memory2_funct3;
    reg[31:0]   w_memory2_rdata;

    always_ff @(posedge i_clk)
    begin
        r_memory2_alu <= r_memory_alu;
        r_memory2_reg_write <= r_memory_reg_write;
        r_memory2_read <= r_memory_read;
        r_memory2_write <= r_memory_write;
        r_memory2_res_src <= r_memory_res_src;
        r_memory2_rd <= r_memory_rd;
        r_memory2_pc_p4 <= r_memory_pc_p4;
        r_memory2_pc_src <= r_memory_pc_src;
        r_memory2_pc_target <= r_memory_pc_target;
        r_memory2_funct3 <= r_memory_funct3;
    end

    reg[7:0]    r_data_byte;
    always_comb
    begin
        case (r_memory2_alu[1:0])
        2'b00: r_data_byte = i_wb_dat[ 0+:8];
        2'b01: r_data_byte = i_wb_dat[ 8+:8];
        2'b10: r_data_byte = i_wb_dat[16+:8];
        2'b11: r_data_byte = i_wb_dat[24+:8];
        endcase
    end
    reg[15:0]    r_data_half_word;
    always_comb
    begin
        case (r_memory2_alu[1])
        1'b0: r_data_half_word = i_wb_dat[ 0+:16];
        1'b1: r_data_half_word = i_wb_dat[16+:16];
        endcase
    end
    //assign      w_memory2_rdata
    always_comb
    begin
        case (r_memory2_funct3)
        3'b000: w_memory2_rdata = { {24{r_data_byte[7]}}, r_data_byte};
        3'b001: w_memory2_rdata = { {16{r_data_half_word[15]}}, r_data_half_word};
        3'b010: w_memory2_rdata = i_wb_dat;
        3'b100: w_memory2_rdata = { {24{1'b0}}, r_data_byte};
        3'b101: w_memory2_rdata = { {16{1'b0}}, r_data_half_word};
        default:w_memory2_rdata = '0;
        endcase
    end

    assign  w_memory2_data = (r_memory2_res_src == 2'b00) ? r_memory2_alu :
                             (r_memory2_res_src == 2'b01) ? w_memory2_rdata :
                             (r_memory2_res_src == 2'b10) ? { r_memory2_pc_p4, 2'b00 } :
                             '0;
/* --------------------- */

/* ---- WRITE MODULE --- */
    reg[31:0]   r_write_data;
    reg         r_write_reg_write;
    reg[4:0]    r_write_rd;
    
    always_ff @(posedge i_clk)
    begin
        r_write_data <= w_memory2_data;
        r_write_reg_write <= r_memory2_reg_write;
        r_write_rd <= r_memory2_rd;
        r_write_pc_src <= r_memory2_pc_src;
        r_write_pc_target <= r_memory2_pc_target;
    end

    always_ff @(posedge i_clk)
    begin
        if (i_reset_n && r_write_reg_write && (|r_write_rd))
            r_reg_file[r_write_rd] <= r_write_data;
    end
/* --------------------- */





/* ---- DECODE MODULE --- */

    assign  w_pc_target = w_fetch_pc + w_decode_imm[31:2];
/* --------------------- */
`endif

    reg[2:0]    r_stage;
    reg[2:0]    r_stage_next;

    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_stage <= STAGE_MEMORY2;
        else
            r_stage <= r_stage_next;
    end

    always_comb
    begin : next_stage
        (* full_case *)
        case (r_stage)
            STAGE_FETCH:    r_stage_next = (i_wb_ack) ? STAGE_DECODE : STAGE_FETCH;
            STAGE_DECODE:   r_stage_next = STAGE_EXECUTE;
            STAGE_EXECUTE:  r_stage_next = STAGE_MEMORY1;
            STAGE_MEMORY1:  r_stage_next = STAGE_MEMORY2;
            STAGE_MEMORY2:  r_stage_next = /*(i_wb_ack) ?*/ STAGE_WRITE/* : STAGE_MEMORY2*/;
            STAGE_WRITE:    r_stage_next = STAGE_FETCH;
            default:        r_stage_next = STAGE_FETCH;
        endcase
    end

    reg     r_stb;
    reg     r_stb_next;
    assign r_stb_next = (r_stage_next == STAGE_FETCH) ? '1 :
                        //(r_stage_next == STAGE_MEMORY1) ? '1 :
                        //(r_stage_next == STAGE_MEMORY2) ? '1 :
                        '0;
    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_stb <= '0;
        else
            r_stb <= r_stb_next;
    end

    reg     r_cyc;
    reg     r_cyc_next;
    assign r_cyc_next = (r_stage_next == STAGE_FETCH) ? '1 :
                        //(r_stage_next == STAGE_MEMORY1) ? '1 :
                        //(r_stage_next == STAGE_MEMORY2) ? '1 :
                        '0;
    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_cyc <= '0;
        else
            r_cyc <= r_cyc_next;
    end

    reg     r_we;
    always_ff @(posedge i_clk)
        r_we <= '0;//r_exec_mem_write;

    assign  w_fetch_stall = (r_stage != STAGE_FETCH);

// WB BUS assignments
    wire[31:2]  w_addr_out;
    //wire[31:0]  w_wr_data;
    //wire[31:2]  w_pc_target;

    assign w_addr_out = //(r_stage == STAGE_MEMORY1)? r_memory_alu[31:2] : 
                        //(r_stage == STAGE_MEMORY2)? r_memory2_alu[31:2] : 
                        w_fetch_pc;

    assign  o_wb_adr = { w_addr_out, 2'b00 };
    assign  o_wb_dat = '0;//r_memory_wdata_shuffled;
    assign  o_wb_we = r_we;
    assign  o_wb_sel = '1;//(r_stage == STAGE_MEMORY1) ? r_memory_mem_sel : '1;
    assign  o_wb_stb = r_stb;
    assign  o_wb_cyc = r_cyc;

// DEBUG
    reg [127:0] dbg_ascii_stage, dbg_ascii_stage_next;

    always @* begin
        dbg_ascii_stage = "";
        if (r_stage == STAGE_FETCH)  dbg_ascii_stage = "fetch";
        if (r_stage == STAGE_DECODE)  dbg_ascii_stage = "decode";
        if (r_stage == STAGE_EXECUTE) dbg_ascii_stage = "execute";
        if (r_stage == STAGE_MEMORY1) dbg_ascii_stage = "memory1";
        if (r_stage == STAGE_MEMORY2) dbg_ascii_stage = "memory2";
        if (r_stage == STAGE_WRITE)   dbg_ascii_stage = "write";
    end

    always @* begin
        dbg_ascii_stage_next = "";
        if (r_stage_next == STAGE_FETCH)  dbg_ascii_stage_next = "fetch";
        if (r_stage_next == STAGE_DECODE)  dbg_ascii_stage_next = "decode";
        if (r_stage_next == STAGE_EXECUTE) dbg_ascii_stage_next = "execute";
        if (r_stage_next == STAGE_MEMORY1) dbg_ascii_stage_next = "memory1";
        if (r_stage_next == STAGE_MEMORY2) dbg_ascii_stage_next = "memory2";
        if (r_stage_next == STAGE_WRITE)   dbg_ascii_stage_next = "write";
    end

initial begin
    r_reg_file[1] = 0;
    r_reg_file[2] = 0;
    r_reg_file[3] = 0;
end
endmodule
