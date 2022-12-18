`timescale 1ps/1ps

`include "rv_defines.vh"

module rv_decode
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire                        i_stall,
    input   wire                        i_flush,
    input   wire[31:0]                  i_data,
    input   wire[31:2]                  i_pc,
    input   wire[31:2]                  i_pc_p4,
    output  wire[4:0]                   o_rs1,
    output  wire[4:0]                   o_rs2,
    output  wire[4:0]                   o_rd,
    output  wire[31:2]                  o_pc,
    output  wire[31:2]                  o_pc_p4,
    output  wire[31:0]                  o_imm,
    output  wire                        o_reg_write,
    output  wire                        o_mem_read,
    output  wire                        o_mem_write,
    output  wire[1:0]                   o_res_src,
    output  wire                        o_pc_sel,
    output  wire                        o_jump,
    output  wire                        o_branch,
    output  wire                        o_alu_op1_sel,
    output  wire                        o_alu_op2_sel,
    output  wire[2:0]                   o_funct3,
    output  wire[4:0]                   o_alu_ctrl,
`ifdef EXTENSION_Zicsr
    output  wire[11:0]                  o_csr_idx,
    output  wire[1:0]                   o_csr_op,
    output  wire                        o_csr_sel,
`endif
    output  wire                        o_inv_instr
);

    logic[31:2] r_pc;
    logic[31:2] r_pc_p4;

    always_ff @(posedge i_clk)
    begin
        if (i_flush)
        begin
            r_pc <= '0;
            r_pc_p4 <= '0;
        end
        else if (!i_stall)
        begin
            r_pc <= i_pc;
            r_pc_p4 <= i_pc_p4;
        end
    end

    core_decode
    u_dec
    (
        .i_instr                        (i_data),
        .i_flush                        (i_flush),
        .o_rs1                          (o_rs1),
        .o_rs2                          (o_rs2),
        .o_rd                           (o_rd),
        .o_imm                          (o_imm),
        .o_reg_write                    (o_reg_write),
        .o_mem_read                     (o_mem_read),
        .o_mem_write                    (o_mem_write),
        .o_res_src                      (o_res_src),
        .o_jump                         (o_jump),
        .o_branch                       (o_branch),
        .o_alu_op1_sel                  (o_alu_op1_sel),
        .o_alu_op2_sel                  (o_alu_op2_sel),
        .o_funct3                       (o_funct3),
        .o_alu_ctrl                     (o_alu_ctrl),
        .o_pc_sel                       (o_pc_sel),
    `ifdef EXTENSION_Zicsr
        .o_csr_idx                      (o_csr_idx),
        .o_csr_op                       (o_csr_op),
        .o_csr_sel                      (o_csr_sel),
    `endif
        .o_inv_instr                    (o_inv_instr)
    );

    assign  o_pc = r_pc;
    assign  o_pc_p4 = r_pc_p4;

endmodule
