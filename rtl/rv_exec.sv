`timescale 1ps/1ps

/* verilator lint_off UNUSED */
module rv_exec
(
    input   wire                        i_clk,
    //input   wire                        i_reset_n,
    input   wire                        i_flush,
`ifdef ALU_2_STAGE
    input   wire                        i_st2_flush,
`endif
    input   decode_t                    i_bus,
    input   wire[31:0]                  i_rs1_val,
    input   wire[31:0]                  i_rs2_val,
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
    decode_t    r_st1;

    always_ff @(posedge i_clk)
    begin
        if (i_flush)
        begin
            r_st1 <= '0;
        end
        else
        begin
            r_st1 <= i_bus;
        end
    end

    logic[31:0] w_bp1, w_bp2;
    logic[31:0] w_op2, w_op1;

    core_exec_prep
    u_exec_prep
    (
        .i_rs1                          (r_st1.rs1),
        .i_rs2                          (r_st1.rs2),
        .i_bp_rs1                       (i_bp_rs1),
        .i_bp_rs2                       (i_bp_rs2),
        .i_memory_rd_val                (i_memory_rd_val),
        .i_write_rd_val                 (i_write_rd_val),
        .i_write_back_rd_val            (i_write_back_rd_val),
        .i_rs1_val                      (i_rs1_val),
        .i_rs2_val                      (i_rs2_val),
        .i_alu_op1_sel                  (r_st1.alu_op1_sel),
        .i_alu_op2_sel                  (r_st1.alu_op2_sel),
        .i_pc                           (r_st1.pc),
        .i_imm                          (r_st1.imm),
        .o_op1                          (w_op1),
        .o_op2                          (w_op2),
        .o_bp1                          (w_bp1),
        .o_bp2                          (w_bp2)
    );

    logic[127:0] w_dbg_st1_instr;
    logic[127:0] w_dbg_st1_alu_op;
    assign  w_dbg_st1_instr = r_st1.dbg_instr;
    assign  w_dbg_st1_alu_op = r_st1.dbg_alu_ctrl;

    exec_prep_t r_st2;

`ifdef ALU_2_STAGE
    always_ff @(posedge i_clk)
    begin
        if (i_st2_flush)
        begin
            r_st2 <= '0;
        end
        else
        begin
            r_st2 <= { r_st1, w_op1, w_op2, w_bp1, w_bp2 };
        end
    end
`else
    assign  r_st2 = { r_st1, w_op1, w_op2, w_bp1, w_bp2 };
`endif

    core_exec_alu
    u_exec_alu
    (
        .i_op1                          (r_st2.op1),
        .i_op2                          (r_st2.op2),
        .i_bp1                          (r_st2.bp1),
        .i_imm                          (r_st2.imm),
        .i_pc                           (r_st2.pc),
        .i_alu_ctrl                     (r_st2.alu_ctrl),
        .i_jump                         (r_st2.jump),
        .i_branch                       (r_st2.branch),
        .i_pc_sel                       (r_st2.pc_sel),
        .o_alu_result                   (o_alu_result),
        .o_pc_src                       (o_pc_src),
        .o_pc_target                    (o_pc_target)
    );

    logic[127:0] w_dbg_st2_instr;
    logic[127:0] w_dbg_st2_alu_op;
    assign  w_dbg_st2_instr = r_st2.dbg_instr;
    assign  w_dbg_st2_alu_op = r_st2.dbg_alu_ctrl;

    assign  o_reg_write = r_st2.reg_write;
    assign  o_mem_read = r_st2.mem_read;
    assign  o_mem_write = r_st2.mem_write;
`ifdef ALU_2_STAGE
    assign  o_st1_rd = r_st1.rd;
    //assign  o_rs1 = r_st2_rs1;
    //assign  o_rs2 = r_st2_rs2;
    assign  o_rs1 = r_st1.rs1;
    assign  o_rs2 = r_st1.rs2;
`else
    assign  o_rs1 = r_st1.rs1;
    assign  o_rs2 = r_st1.rs2;
`endif
    assign  o_rd = r_st2.rd;
    assign  o_pc_p4 = r_st2.pc_p4;
    assign  o_res_src = r_st2.res_src;
    assign  o_funct3 = r_st2.funct3;
    assign  o_rs2_val = r_st2.bp2;
`ifdef ALU_2_STAGE
    assign  o_jump = (r_st2.jump | r_st2.branch);
`else
    assign  o_jump = (r_st1.jump | r_st1.branch);
`endif

    initial
    begin
        r_st1 = '0;
        r_st2 = '0;
    end

endmodule
/* verilator lint_on UNUSED */
