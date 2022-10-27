`timescale 1 ns / 1 ps

`include "rv_defines.vh"

module rv_core_mini
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
`ifdef TO_SIM
    output  wire[31:0]                  o_debug,
`endif
    output  wire                        o_wb_cyc
);

    localparam  STAGE_FETCH   = 0;
    //localparam  STAGE_DECODE  = 1;
    localparam  STAGE_EXECUTE = 2;
    localparam  STAGE_WRITE   = 3;

    logic[1:0]  r_stage;
    logic[1:0]  r_stage_next;

    logic[31:2] r_fetch_pc_target;
    logic[31:2] r_fetch_pc;
    logic[31:2] w_fetch_pc_next;
    logic[31:2] w_fetch_pc_p4;
    logic       w_fetch_pc_sel;
    logic       w_fetch_stall;

    logic[31:0] w_imm;
    logic[4:0]  w_rs1, w_rs2, w_rd;
    logic       w_reg_write;
    logic       w_mem_read;
    logic       w_mem_write;
    logic[1:0]  w_res_src;
    logic       w_pc_sel;
    logic       w_jump;
    logic       w_branch;
    logic       w_alu_op1_sel;
    logic       w_alu_op2_sel;
    logic[2:0]  w_funct3;
    logic[4:0]  w_alu_ctrl;
    logic       w_inv_instr;
`ifdef EXTENSION_Zicsr
    logic[11:0] w_csr_idx;
    logic[1:0]  w_csr_op;
    logic       w_csr_sel;
    //logic[31:0] w_csr_rdata;
`endif
    logic[31:0] w_rs1_val, w_rs2_val;

    logic[31:0] r_instr_saved;
    logic[31:0] w_instr;
    
    logic[31:0] w_op1;
    logic[31:0] w_op2;
    logic[31:0] w_bp1;

    logic[31:0] w_alu_result;

    logic[31:0] w_mem_wdata;
    logic[3:0]  w_mem_sel;

    logic[31:0] w_reg_wdata;

    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_stage <= STAGE_FETCH;
        else
            r_stage <= r_stage_next;
    end

    always_comb
    begin
        case (r_stage)
        STAGE_FETCH:   r_stage_next = STAGE_EXECUTE;//STAGE_DECODE;
        //STAGE_DECODE:  r_stage_next = STAGE_EXECUTE;
        STAGE_EXECUTE: r_stage_next = STAGE_WRITE;
        STAGE_WRITE:   r_stage_next = STAGE_FETCH;
        endcase
    end

    assign  w_fetch_pc_p4 = r_fetch_pc + 1'b1;
    assign  w_fetch_pc_next = w_fetch_pc_sel ? r_fetch_pc_target : w_fetch_pc_p4;

    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
        begin
            r_fetch_pc <= RESET_ADDR[31:2];
        end
        //else if ((!w_fetch_stall) || w_fetch_pc_sel)
        else if (r_stage == STAGE_WRITE)
        begin
            r_fetch_pc <= w_fetch_pc_next;
        end
    end

    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_instr_saved <= '0;
        else if (r_stage == STAGE_EXECUTE)
            r_instr_saved <= i_wb_dat;
    end

    assign  w_instr = (r_stage == STAGE_EXECUTE) ? i_wb_dat : r_instr_saved;

    core_decode
    u_dec
    (
        .i_instr                        (w_instr),
        .i_flush                        ('0),
        .o_rs1                          (w_rs1),
        .o_rs2                          (w_rs2),
        .o_rd                           (w_rd),
        .o_imm                          (w_imm),
        .o_reg_write                    (w_reg_write),
        .o_mem_read                     (w_mem_read),
        .o_mem_write                    (w_mem_write),
        .o_res_src                      (w_res_src),
        .o_jump                         (w_jump),
        .o_branch                       (w_branch),
        .o_alu_op1_sel                  (w_alu_op1_sel),
        .o_alu_op2_sel                  (w_alu_op2_sel),
        .o_funct3                       (w_funct3),
        .o_alu_ctrl                     (w_alu_ctrl),
        .o_pc_sel                       (w_pc_sel),
    `ifdef EXTENSION_Zicsr
        .o_csr_idx                      (w_csr_idx),
        .o_csr_op                       (w_csr_op),
        .o_csr_sel                      (w_csr_sel),
    `endif
        .o_inv_instr                    (w_inv_instr)
    );

    core_exec_prep
    u_exec_prep
    (
        .i_rs1                          (w_rs1),
        .i_rs2                          (w_rs2),
        .i_bp_rs1                       (`STAGED_BP_DIRECT),
        .i_bp_rs2                       (`STAGED_BP_DIRECT),
        .i_memory_rd_val                ('0),
        .i_write_rd_val                 ('0),
        .i_write_back_rd_val            ('0),
        .i_rs1_val                      (w_rs1_val),
        .i_rs2_val                      (w_rs2_val),
        .i_alu_op1_sel                  (w_alu_op1_sel),
        .i_alu_op2_sel                  (w_alu_op2_sel),
        .i_pc                           (r_fetch_pc),
        .i_imm                          (w_imm),
        .o_op1                          (w_op1),
        .o_op2                          (w_op2),
        .o_bp1                          (w_bp1)
    );

    core_exec_alu
    u_exec_alu
    (
        .i_op1                          (w_op1),
        .i_op2                          (w_op2),
        .i_bp1                          (w_bp1),
        .i_imm                          (w_imm),
        .i_pc                           (r_fetch_pc),
        .i_alu_ctrl                     (w_alu_ctrl),
        .i_jump                         (w_jump),
        .i_branch                       (w_branch),
        .i_pc_sel                       (w_pc_sel),
        .o_alu_result                   (w_alu_result),
        .o_pc_src                       (w_fetch_pc_sel),
        .o_pc_target                    (r_fetch_pc_target)
    );

    core_memory
    u_mem
    (
        .i_funct3                       (w_funct3),
        .i_alu_result_low               (w_alu_result[1:0]),
        .i_rs2_val                      (w_rs2_val),
        .o_wdata                        (w_mem_wdata),
        .o_mem_sel                      (w_mem_sel)
    );

    core_write
    u_wr
    (
        .i_data                         (i_wb_dat),
        .i_alu_result                   (w_alu_result),
        .i_pc_p4                        (w_fetch_pc_p4),
        .i_funct3                       (w_funct3),
        .i_res_src                      (w_res_src),
        .o_data                         (w_reg_wdata)
    );

    rv_regs
    u_regs
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_rs1                          (w_rs1),
        .i_rs2                          (w_rs2),
        .i_rd                           (w_rd),
        .i_write                        (w_reg_write & (r_stage == STAGE_EXECUTE)),
        .i_data                         (w_reg_wdata),
        .o_data1                        (w_rs1_val),
        .o_data2                        (w_rs2_val)
    );

    assign w_fetch_stall = '0;

    logic       w_bus_data;

    assign  w_bus_data = (r_stage == STAGE_EXECUTE);

    assign  o_wb_adr = w_bus_data ? w_alu_result : { r_fetch_pc, 2'b00 };
    assign  o_wb_dat = w_mem_wdata;
    assign  o_wb_we = w_bus_data ? w_mem_write : '0;
    assign  o_wb_sel = w_bus_data ? w_mem_sel : '1;
    assign  o_wb_stb = '1;
    assign  o_wb_cyc = '1;

    assign  o_debug = '0;

`ifdef TO_SIM
	reg [127:0] dbg_stage;
	always @* begin
		dbg_stage = '0;
        if (r_stage == STAGE_FETCH)   dbg_stage = "FETCH";
        //if (r_stage == STAGE_DECODE)  dbg_stage = "DECODE";
        if (r_stage == STAGE_EXECUTE) dbg_stage = "EXECUTE";
        if (r_stage == STAGE_WRITE)   dbg_stage = "WRITE";
	end
`endif

endmodule
