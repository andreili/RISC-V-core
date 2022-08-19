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
    wire[1:0]   w_decode_alu_op1_sel;
    wire        w_decode_alu_op2_sel;
    wire[2:0]   w_decode_funct3;
    wire[5:0]   w_decode_alu_ctrl;

    wire[2:0]   w_exec_funct3;
    wire[31:0]  w_exec_alu_result;
    wire        w_exec_reg_write;
    wire        w_exec_mem_read;
    wire        w_exec_mem_write;
    wire[31:2]  w_exec_pc_p4;
    wire[4:0]   w_exec_rd;
    wire[1:0]   w_exec_res_src;
    wire        w_exec_pc_src;
    wire[31:2]  w_exec_pc_target;
    wire[31:0]  w_exec_rs2_val;
    
    wire[31:0]  w_memory_alu_result;
    wire        w_memory_reg_write;
    wire[1:0]   w_memory_res_src;
    wire[4:0]   w_memory_rd;
    wire[31:2]  w_memory_pc_p4;
    wire[2:0]   w_memory_funct3;
    wire[31:2]  w_memory_pc_target;

    wire[31:0]  w_write_data;
    wire[4:0]   w_write_rd;
    wire        w_write_reg_write;

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
        .i_pc_sel                       (w_exec_pc_src),
        .i_pc_target                    (w_exec_pc_target),
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
        .o_alu_op1_sel                  (w_decode_alu_op1_sel),
        .o_alu_op2_sel                  (w_decode_alu_op2_sel),
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
        .i_alu_op1_sel                  (w_decode_alu_op1_sel),
        .i_alu_op2_sel                  (w_decode_alu_op2_sel),
        .i_funct3                       (w_decode_funct3),
        .i_alu_ctrl                     (w_decode_alu_ctrl),
        .o_alu_result                   (w_exec_alu_result),
        .o_reg_write                    (w_exec_reg_write),
        .o_mem_read                     (w_exec_mem_read),
        .o_mem_write                    (w_exec_mem_write),
        .o_rd                           (w_exec_rd),
        .o_pc_p4                        (w_exec_pc_p4),
        .o_res_src                      (w_exec_res_src),
        .o_pc_src                       (w_exec_pc_src),
        .o_pc_target                    (w_exec_pc_target),
        .o_funct3                       (w_exec_funct3),
        .o_rs2_val                      (w_exec_rs2_val)
    );

    rv_memory
    u_st4_memory
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_alu_result                   (w_exec_alu_result),
        .i_reg_write                    (w_exec_reg_write),
        .i_mem_read                     (w_exec_mem_read),
        .i_mem_write                    (w_exec_mem_write),
        .i_rd                           (w_exec_rd),
        .i_res_src                      (w_exec_res_src),
        .i_funct3                       (w_exec_funct3),
        .i_pc_p4                        (w_exec_pc_p4),
        .i_rs2_val                      (w_exec_rs2_val),
        .i_pc_target                    (w_exec_pc_target),
        .o_alu_result                   (w_memory_alu_result),
        .o_reg_write                    (w_memory_reg_write),
        .o_res_src                      (w_memory_res_src),
        .o_rd                           (w_memory_rd),
        .o_pc_p4                        (w_memory_pc_p4),
        .o_funct3                       (w_memory_funct3),
        .o_pc_target                    (w_memory_pc_target)
    );

    rv_write
    u_st5_write
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_data                         (i_wb_dat),
        .i_alu_result                   (w_memory_alu_result),
        .i_reg_write                    (w_memory_reg_write),
        .i_rd                           (w_memory_rd),
        .i_res_src                      (w_memory_res_src),
        .i_pc_p4                        (w_memory_pc_p4),
        .i_pc_target                    (w_memory_pc_target),
        .i_funct3                       (w_memory_funct3),
        .o_data                         (w_write_data),
        .o_rd                           (w_write_rd),
        .o_reg_write                    (w_write_reg_write)
    );

    //regfile
    reg[31:0]   r_reg_file[31:1];

    assign w_reg_data1 = (|w_decode_rs1) ? r_reg_file[w_decode_rs1] : '0;
    assign w_reg_data2 = (|w_decode_rs2) ? r_reg_file[w_decode_rs2] : '0;

    always_ff @(posedge i_clk)
    begin
        if (i_reset_n && w_write_reg_write && (|w_write_rd))
            r_reg_file[w_write_rd] <= w_write_data;
    end

`ifdef FGFGFFF

/* ---- DECODE MODULE --- */

    assign  w_pc_target = w_fetch_pc + w_decode_imm[31:2];
/* --------------------- */
`endif

    reg[2:0]    r_stage;
    reg[2:0]    r_stage_next;

    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_stage <= STAGE_MEMORY;
        else
            r_stage <= r_stage_next;
    end

    always_comb
    begin : next_stage
        (* full_case *)
        case (r_stage)
            STAGE_FETCH:    r_stage_next = (i_wb_ack) ? STAGE_DECODE : STAGE_FETCH;
            STAGE_DECODE:   r_stage_next = STAGE_EXECUTE;
            STAGE_EXECUTE:  r_stage_next = STAGE_MEMORY;
            STAGE_MEMORY:   r_stage_next = /*(i_wb_ack) ?*/ STAGE_WRITE/* : STAGE_MEMORY*/;
            STAGE_WRITE:    r_stage_next = STAGE_FETCH;
            default:        r_stage_next = STAGE_FETCH;
        endcase
    end

    reg     r_stb;
    reg     r_stb_next;
    assign r_stb_next = (r_stage_next == STAGE_FETCH) ? '1 :
                        //(r_stage_next == STAGE_MEMORY) ? '1 :
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
                        //(r_stage_next == STAGE_MEMORY) ? '1 :
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

    assign w_addr_out = //(r_stage == STAGE_MEMORY)? r_memory_alu[31:2] : 
                        w_fetch_pc;

    assign  o_wb_adr = { w_addr_out, 2'b00 };
    assign  o_wb_dat = '0;//r_memory_wdata_shuffled;
    assign  o_wb_we = r_we;
    assign  o_wb_sel = '1;//(r_stage == STAGE_MEMORY) ? r_memory_mem_sel : '1;
    assign  o_wb_stb = r_stb;
    assign  o_wb_cyc = r_cyc;

// DEBUG
    reg [127:0] dbg_ascii_stage, dbg_ascii_stage_next;

    always @* begin
        dbg_ascii_stage = "";
        if (r_stage == STAGE_FETCH)   dbg_ascii_stage = "fetch";
        if (r_stage == STAGE_DECODE)  dbg_ascii_stage = "decode";
        if (r_stage == STAGE_EXECUTE) dbg_ascii_stage = "execute";
        if (r_stage == STAGE_MEMORY)  dbg_ascii_stage = "memory";
        if (r_stage == STAGE_WRITE)   dbg_ascii_stage = "write";
    end

    always @* begin
        dbg_ascii_stage_next = "";
        if (r_stage_next == STAGE_FETCH)   dbg_ascii_stage_next = "fetch";
        if (r_stage_next == STAGE_DECODE)  dbg_ascii_stage_next = "decode";
        if (r_stage_next == STAGE_EXECUTE) dbg_ascii_stage_next = "execute";
        if (r_stage_next == STAGE_MEMORY)  dbg_ascii_stage_next = "memory";
        if (r_stage_next == STAGE_WRITE)   dbg_ascii_stage_next = "write";
    end

initial begin
    r_reg_file[1] = 0;
    r_reg_file[2] = 0;
    r_reg_file[3] = 0;
end
endmodule
