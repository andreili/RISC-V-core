`timescale 1 ns / 1 ps

module rv_write
(
    input   wire                        i_clk,
    //input   wire                        i_reset_n,
    input   wire[31:0]                  i_data,
    input   wire[31:0]                  i_alu_result,
    input   wire                        i_reg_write,
    input   wire[4:0]                   i_rd,
    input   wire[1:0]                   i_res_src,
    input   wire[31:2]                  i_pc_p4,
    //input   wire[31:2]                  i_pc_target,
    input   wire[2:0]                   i_funct3,
    output  wire[31:0]                  o_data,
    output  wire[4:0]                   o_rd,
    output  wire                        o_reg_write
);

`include "rv_defines.vh"

    logic[31:0] r_alu_result;
    logic       r_reg_write;
    logic[4:0]  r_rd;
    logic[1:0]  r_res_src;
    logic[31:2] r_pc_p4;
    logic[2:0]  r_funct3;

    always_ff @(posedge i_clk)
    begin
        r_alu_result <= i_alu_result;
        r_reg_write <= i_reg_write;
        r_rd <= i_rd;
        r_res_src <= i_res_src;
        r_pc_p4 <= i_pc_p4;
        r_funct3 <= i_funct3;
    end

    assign  o_rd = r_rd;
    assign  o_reg_write = r_reg_write;

    core_write
    u_wr
    (
        .i_data                         (i_data),
        .i_alu_result                   (r_alu_result),
        .i_pc_p4                        (r_pc_p4),
        .i_funct3                       (r_funct3),
        .i_res_src                      (r_res_src),
        .o_data                         (o_data)
    );

endmodule
