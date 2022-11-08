`timescale 1ps/1ps

module rv_exec
(
    input   wire                        i_clk,
    //input   wire                        i_reset_n,
    input   wire                        i_flush,
`ifdef ALU_2_STAGE
    input   wire                        i_st2_flush,
`endif
    input   wire[31:2]                  i_pc,
    input   wire[31:2]                  i_pc_p4,
    input   wire[31:0]                  i_rs1_val,
    input   wire[31:0]                  i_rs2_val,
    input   wire[4:0]                   i_rs1,
    input   wire[4:0]                   i_rs2,
    input   wire[4:0]                   i_rd,
    //input   wire                        i_csr_read,
    input   wire[31:0]                  i_imm,
    input   wire                        i_reg_write,
    input   wire                        i_mem_read,
    input   wire                        i_mem_write,
    input   wire[1:0]                   i_res_src,
    input   wire                        i_pc_sel,
    input   wire                        i_jump,
    input   wire                        i_branch,
    input   wire                        i_alu_op1_sel,
    input   wire                        i_alu_op2_sel,
    input   wire[2:0]                   i_funct3,
    input   wire[4:0]                   i_alu_ctrl,
    input   wire[1:0]                   i_bp_rs1,
    input   wire[1:0]                   i_bp_rs2,
    input   wire[31:0]                  i_memory_rd_val,
    input   wire[31:0]                  i_write_rd_val,
    input   wire[31:0]                  i_write_back_rd_val,

    output  wire[31:0]                  o_alu_result,
    output  wire                        o_reg_write,
    output  wire                        o_mem_read,
    output  wire                        o_mem_write,
`ifdef ALU_2_STAGE
    output  wire[4:0]                   o_st1_rd,
`endif
    output  wire[4:0]                   o_rs1,
    output  wire[4:0]                   o_rs2,
    output  wire[4:0]                   o_rd,
    output  wire[31:2]                  o_pc_p4,
    output  wire[1:0]                   o_res_src,
    output  wire                        o_pc_src,
    output  wire[31:2]                  o_pc_target,
    output  wire[2:0]                   o_funct3,
    output  wire[31:0]                  o_rs2_val,
    output  wire                        o_jump
);

    reg[31:2]   r_pc;
    reg[31:2]   r_pc_p4;
    //reg[31:0]   r_rs1_val;
    //reg[31:0]   r_rs2_val;
    reg[4:0]    r_rs1;
    reg[4:0]    r_rs2;
    reg[4:0]    r_rd;
    reg[31:0]   r_imm;
    reg         r_reg_write;
    reg[1:0]    r_res_src;
    reg         r_mem_read;
    reg         r_mem_write;
    reg         r_jump;
    reg         r_branch;
    reg         r_alu_op1_sel;
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
            //r_rs1_val <= '0;
            //r_rs2_val <= '0;
            r_rs1 <= '0;
            r_rs2 <= '0;
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
            //r_rs1_val <= (|i_rs1) ? i_rs1_val : '0;
            //r_rs2_val <= (|i_rs2) ? i_rs2_val : '0;
            r_rs1 <= i_rs1;
            r_rs2 <= i_rs2;
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

    logic[31:0] w_bp1, w_bp2;
    logic[31:0] w_op2, w_op1;

    core_exec_prep
    u_exec_prep
    (
        .i_rs1                          (r_rs1),
        .i_rs2                          (r_rs2),
        .i_bp_rs1                       (i_bp_rs1),
        .i_bp_rs2                       (i_bp_rs2),
        .i_memory_rd_val                (i_memory_rd_val),
        .i_write_rd_val                 (i_write_rd_val),
        .i_write_back_rd_val            (i_write_back_rd_val),
        .i_rs1_val                      (i_rs1_val),
        .i_rs2_val                      (i_rs2_val),
        .i_alu_op1_sel                  (r_alu_op1_sel),
        .i_alu_op2_sel                  (r_alu_op2_sel),
        .i_pc                           (r_pc),
        .i_imm                          (r_imm),
        .o_op1                          (w_op1),
        .o_op2                          (w_op2),
        .o_bp1                          (w_bp1),
        .o_bp2                          (w_bp2)
    );

    logic[31:0] r_st2_op1, r_st2_op2;
    logic[31:0] r_st2_bp1, r_st2_bp2;
    logic[31:0] r_st2_imm;
    logic[31:2] r_st2_pc, r_st2_pc_p4;
    logic[4:0]  r_st2_alu_ctrl;
    logic       r_st2_jump, r_st2_branch, r_st2_pc_sel;
    logic       r_st2_reg_write, r_st2_mem_read, r_st2_mem_write;
    logic[4:0]  /*r_st2_rs1, r_st2_rs2, */r_st2_rd;
    logic[1:0]  r_st2_res_src;
    logic[2:0]  r_st2_funct3;
    //logic[31:0] r_st2_rs2_val;

`ifdef ALU_2_STAGE
    always_ff @(posedge i_clk)
    begin
        if (i_st2_flush)
        begin
            r_st2_op1 <= '0;
            r_st2_op2 <= '0;
            r_st2_bp1 <= '0;
            r_st2_bp2 <= '0;
            r_st2_imm <= '0;
            r_st2_pc <= '0;
            r_st2_pc_p4 <= '0;
            r_st2_alu_ctrl <= '0;
            r_st2_jump <= '0;
            r_st2_branch <= '0;
            r_st2_pc_sel <= '0;
            r_st2_reg_write <= '0;
            r_st2_mem_read <= '0;
            r_st2_mem_write <= '0;
            //r_st2_rs1 <= '0;
            //r_st2_rs2 <= '0;
            r_st2_rd <= '0;
            r_st2_res_src <= '0;
            r_st2_funct3 <= '0;
            //r_st2_rs2_val <= '0;
        end
        else
        begin
            r_st2_op1 <= w_op1;
            r_st2_op2 <= w_op2;
            r_st2_bp1 <= w_bp1;
            r_st2_bp2 <= w_bp2;
            r_st2_imm <= r_imm;
            r_st2_pc <= r_pc;
            r_st2_pc_p4 <= r_pc_p4;
            r_st2_alu_ctrl <= r_alu_ctrl;
            r_st2_jump <= r_jump;
            r_st2_branch <= r_branch;
            r_st2_pc_sel <= r_pc_sel;
            r_st2_reg_write <= r_reg_write;
            r_st2_mem_read <= r_mem_read;
            r_st2_mem_write <= r_mem_write;
            //r_st2_rs1 <= r_rs1;
            //r_st2_rs2 <= r_rs2;
            r_st2_rd <= r_rd;
            r_st2_res_src <= r_res_src;
            r_st2_funct3 <= r_funct3;
            //r_st2_rs2_val <= r_st2_bp2;
        end
    end
`else
    assign  r_st2_op1 = w_op1;
    assign  r_st2_op2 = w_op2;
    assign  r_st2_bp1 = w_bp1;
    assign  r_st2_bp2 = w_bp2;
    assign  r_st2_imm = r_imm;
    assign  r_st2_pc = r_pc;
    assign  r_st2_pc_p4 = r_pc_p4;
    assign  r_st2_alu_ctrl = r_alu_ctrl;
    assign  r_st2_jump = r_jump;
    assign  r_st2_branch = r_branch;
    assign  r_st2_pc_sel = r_pc_sel;
    assign  r_st2_reg_write = r_reg_write;
    assign  r_st2_mem_read = r_mem_read;
    assign  r_st2_mem_write = r_mem_write;
    //assign  r_st2_rs1 = r_rs1;
    //assign  r_st2_rs2 = r_rs2;
    assign  r_st2_rd = r_rd;
    assign  r_st2_res_src = r_res_src;
    assign  r_st2_funct3 = r_funct3;
    //assign  r_st2_rs2_val = r_st2_bp2;
`endif

    core_exec_alu
    u_exec_alu
    (
        .i_op1                          (r_st2_op1),
        .i_op2                          (r_st2_op2),
        .i_bp1                          (r_st2_bp1),
        .i_imm                          (r_st2_imm),
        .i_pc                           (r_st2_pc),
        .i_alu_ctrl                     (r_st2_alu_ctrl),
        .i_jump                         (r_st2_jump),
        .i_branch                       (r_st2_branch),
        .i_pc_sel                       (r_st2_pc_sel),
        .o_alu_result                   (o_alu_result),
        .o_pc_src                       (o_pc_src),
        .o_pc_target                    (o_pc_target)
    );

    assign  o_reg_write = r_st2_reg_write;
    assign  o_mem_read = r_st2_mem_read;
    assign  o_mem_write = r_st2_mem_write;
`ifdef ALU_2_STAGE
    assign  o_st1_rd = r_rd;
    //assign  o_rs1 = r_st2_rs1;
    //assign  o_rs2 = r_st2_rs2;
    assign  o_rs1 = r_rs1;
    assign  o_rs2 = r_rs2;
`else
    assign  o_rs1 = r_rs1;
    assign  o_rs2 = r_rs2;
`endif
    assign  o_rd = r_st2_rd;
    assign  o_pc_p4 = r_st2_pc_p4;
    assign  o_res_src = r_st2_res_src;
    assign  o_funct3 = r_st2_funct3;
    assign  o_rs2_val = r_st2_bp2;
`ifdef ALU_2_STAGE
    assign  o_jump = (r_st2_jump | r_st2_branch);
`else
    assign  o_jump = (r_jump | r_branch);
`endif

    initial
    begin
        r_reg_write = '0;
        r_mem_write = '0;
        r_st2_reg_write = '0;
        r_st2_mem_write = '0;
    end

endmodule
