`timescale 1 ns / 1 ps

module rv_exec
(
    input   wire                        i_clk,
    //input   wire                        i_reset_n,
    input   wire                        i_flush,
    input   wire[31:2]                  i_pc,
    input   wire[31:2]                  i_pc_p4,
    input   wire[31:0]                  i_rs1_val,
    input   wire[31:0]                  i_rs2_val,
    input   wire[4:0]                   i_rs1,
    input   wire[4:0]                   i_rs2,
    input   wire[4:0]                   i_rd,
    input   wire[31:0]                  i_imm,
    input   wire                        i_reg_write,
    input   wire                        i_mem_read,
    input   wire                        i_mem_write,
    input   wire[1:0]                   i_res_src,
    input   wire                        i_pc_sel,
    input   wire                        i_jump,
    input   wire                        i_branch,
    input   wire[1:0]                   i_alu_op1_sel,
    input   wire                        i_alu_op2_sel,
    input   wire[2:0]                   i_funct3,
    input   wire[4:0]                   i_alu_ctrl,

    output  wire[31:0]                  o_alu_result,
    output  wire                        o_reg_write,
    output  wire                        o_mem_read,
    output  wire                        o_mem_write,
    output  wire[4:0]                   o_rd,
    output  wire[31:2]                  o_pc_p4,
    output  wire[1:0]                   o_res_src,
    output  wire                        o_pc_src,
    output  wire[31:2]                  o_pc_target,
    output  wire[2:0]                   o_funct3,
    output  wire[31:0]                  o_rs2_val
);

    reg[31:2]   r_pc;
    reg[31:2]   r_pc_p4;
    reg[31:0]   r_rs1_val;
    reg[31:0]   r_rs2_val;
    //reg[4:0]    r_rs1;
    //reg[4:0]    r_rs2;
    reg[4:0]    r_rd;
    reg[31:0]   r_imm;
    reg         r_reg_write;
    reg[1:0]    r_res_src;
    reg         r_mem_read;
    reg         r_mem_write;
    reg         r_jump;
    reg         r_branch;
    reg[1:0]    r_alu_op1_sel;
    reg         r_alu_op2_sel;
    reg         r_pc_sel;
    wire        w_zero;
    reg[2:0]    r_funct3;
    reg[4:0]    r_alu_ctrl;

    always_ff @(posedge i_clk)
    begin
        if (i_flush)
        begin
            r_pc <= '0;
            r_pc_p4 <= '0;
            r_rs1_val <= '0;
            r_rs2_val <= '0;
            //r_rs1 <= '0;
            //r_rs2 <= '0;
            r_rd <= '0;
            r_imm <= '0;
            r_mem_read <= '0;
            r_reg_write <= '0;
            r_res_src <= '0;
            r_mem_write <= '0;
            r_jump <= '0;
            r_branch <= '0;
            r_alu_op1_sel <= '0;
            r_alu_op2_sel <= '0;
            r_funct3 <= '0;
            r_alu_ctrl <= '0;
            r_pc_sel <= '0;
        end
        else
        begin
            r_pc <= i_pc;
            r_pc_p4 <= i_pc_p4;
            r_rs1_val <= (|i_rs1) ? i_rs1_val : '0;
            r_rs2_val <= (|i_rs2) ? i_rs2_val : '0;
            //r_rs1 <= i_rs1;
            //r_rs2 <= i_rs2;
            r_rd <= i_rd;
            r_imm <= i_imm;
            r_reg_write <= i_reg_write;
            r_res_src <= i_res_src;
            r_mem_read <= i_mem_read;
            r_mem_write <= i_mem_write;
            r_jump <= i_jump;
            r_branch <= i_branch;
            r_alu_op1_sel <= i_alu_op1_sel;
            r_alu_op2_sel <= i_alu_op2_sel;
            r_funct3 <= i_funct3;
            r_alu_ctrl <= i_alu_ctrl;
            r_pc_sel <= i_pc_sel;
        end
    end

    reg[31:0]   w_op2, w_op1;
    always_comb
    begin
        case (r_alu_op1_sel)
        `ALU_SRC_OP1_REG: w_op1 = r_rs1_val;
        `ALU_SRC_OP1_PC:  w_op1 = { r_pc, 2'b0 };
        default:          w_op1 = '0;
        endcase
    end
    assign  w_op2 = (r_alu_op2_sel == `ALU_SRC_OP2_IMM) ? r_imm : r_rs2_val;

    rv_alu
    u_alu
    (
        .i_src_a                        (w_op1),
        .i_src_b                        (w_op2),
        .i_ctrl                         (r_alu_ctrl),
        .o_result                       (o_alu_result),
        .o_zero                         (w_zero)
    );

    //assign  o_pc_src = (r_jump | (r_branch & (!w_zero)));
    assign  o_pc_src = (r_jump | (r_branch & (o_alu_result[0])));
    wire[31:2]  w_pc = r_pc_sel ? r_rs1_val[31:2] : r_pc;
    assign  o_pc_target = w_pc + r_imm[31:2];

    assign  o_reg_write = r_reg_write;
    assign  o_mem_read = r_mem_read;
    assign  o_mem_write = r_mem_write;
    assign  o_rd = r_rd;
    assign  o_pc_p4 = r_pc_p4;
    assign  o_res_src = r_res_src;
    assign  o_funct3 = r_funct3;
    assign  o_rs2_val = r_rs2_val;

endmodule
