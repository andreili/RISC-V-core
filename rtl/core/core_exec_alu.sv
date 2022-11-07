`timescale 1ps/1ps

`include "../rv_defines.vh"

module core_exec_alu
(
    input   wire[31:0]                  i_op1,
    input   wire[31:0]                  i_op2,
    input   wire[31:0]                  i_bp1,
    input   wire[31:0]                  i_imm,
    input   wire[31:2]                  i_pc,
    input   wire[4:0]                   i_alu_ctrl,
    input   wire                        i_jump,
    input   wire                        i_branch,
    input   wire                        i_pc_sel,
    output  wire[31:0]                  o_alu_result,
    output  wire                        o_pc_src,
    output  wire[31:2]                  o_pc_target
);

    logic[31:0] w_alu_result;
    logic[31:2] w_pc_next;
    logic       w_zero;

    rv_alu
    u_alu
    (
        .i_src_a                        (i_op1),
        .i_src_b                        (i_op2),
        .i_ctrl                         (i_alu_ctrl),
        .o_result                       (w_alu_result),
        .o_zero                         (w_zero)
    );

    assign  w_pc_next = i_pc_sel ? i_bp1[31:2] : i_pc;

    assign  o_alu_result = w_alu_result;
    assign  o_pc_src = (i_jump | (i_branch & (w_alu_result[0])));
    assign  o_pc_target = w_pc_next + i_imm[31:2];

endmodule
