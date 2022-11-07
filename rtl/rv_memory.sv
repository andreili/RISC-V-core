`timescale 1ps/1ps

module rv_memory
(
    input   wire                        i_clk,
    //input   wire                        i_reset_n,

    input   wire[31:0]                  i_alu_result,
    input   wire                        i_reg_write,
    input   wire                        i_mem_read,
    input   wire                        i_mem_write,
    input   wire[4:0]                   i_rd,
    input   wire[1:0]                   i_res_src,
    input   wire[2:0]                   i_funct3,
    input   wire[31:2]                  i_pc_p4,
    input   wire[31:0]                  i_rs2_val,
    input   wire[31:2]                  i_pc_target,
    output  wire[31:0]                  o_alu_result,
    output  wire                        o_reg_write,
    output  wire[1:0]                   o_res_src,
    output  wire[4:0]                   o_rd,
    output  wire[31:2]                  o_pc_p4,
    output  wire[2:0]                   o_funct3,
    output  wire[31:2]                  o_pc_target,
    output  wire                        o_mem_write,
    output  wire                        o_mem_read,
    output  wire[3:0]                   o_mem_sel,
    output  wire[31:0]                  o_wdata
);

    logic[31:0] r_alu;
    logic       r_reg_write;
    logic       r_read;
    logic       r_write;
    logic[31:0] r_wdata;
    logic[1:0]  r_res_src;
    logic[4:0]  r_rd;
    logic[31:2] r_pc_p4;
    logic[31:2] r_pc_target;
    logic[2:0]  r_funct3;
    
    always_ff @(posedge i_clk)
    begin
        r_alu <= i_alu_result;
        r_reg_write <= i_reg_write;
        r_read <= i_mem_read;
        r_write <= i_mem_write;
        r_res_src <= i_res_src;
        r_rd <= i_rd;
        r_pc_p4 <= i_pc_p4;
        r_pc_target <= i_pc_target;
        r_funct3 <= i_funct3;
        r_wdata <= i_rs2_val;
    end

    assign  o_alu_result = r_alu;
    assign  o_reg_write = r_reg_write;
    assign  o_res_src = r_res_src;
    assign  o_rd = r_rd;
    assign  o_pc_p4 = r_pc_p4;
    assign  o_funct3 = r_funct3;
    assign  o_pc_target = r_pc_target;
    assign  o_mem_write = r_write;
    assign  o_mem_read = r_read;

    core_memory
    u_mem
    (
        .i_funct3                       (r_funct3),
        .i_alu_result_low               (r_alu[1:0]),
        .i_rs2_val                      (r_wdata),
        .o_wdata                        (o_wdata),
        .o_mem_sel                      (o_mem_sel)
    );

initial
begin
    r_write = '0;
end

endmodule
