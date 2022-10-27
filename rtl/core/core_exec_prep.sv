`timescale 1 ns / 1 ps

`include "../rv_defines.vh"

module core_exec_prep
(
    input   wire[4:0]                   i_rs1,
    input   wire[4:0]                   i_rs2,
    input   wire[1:0]                   i_bp_rs1,
    input   wire[1:0]                   i_bp_rs2,
    input   wire[31:0]                  i_memory_rd_val,
    input   wire[31:0]                  i_write_rd_val,
    input   wire[31:0]                  i_write_back_rd_val,
    input   wire[31:0]                  i_rs1_val,
    input   wire[31:0]                  i_rs2_val,
    input   wire                        i_alu_op1_sel,
    input   wire                        i_alu_op2_sel,
    input   wire[31:2]                  i_pc,
    input   wire[31:0]                  i_imm,
    output  wire[31:0]                  o_op1,
    output  wire[31:0]                  o_op2,
    output  wire[31:0]                  o_bp1,
    output  wire[31:0]                  o_bp2
);

    logic[31:0] r_bp1, r_bp2;

    always_comb
    begin
        case (i_bp_rs1)
        `STAGED_BP_MEMORY  : r_bp1 = i_memory_rd_val;
        `STAGED_BP_WRITE   : r_bp1 = i_write_rd_val;
        `STAGED_BP_WRITE_BK: r_bp1 = i_write_back_rd_val;
        default:             r_bp1 = (|i_rs1) ? i_rs1_val : '0;
        endcase
    end

    always_comb
    begin
        case (i_bp_rs2)
        `STAGED_BP_MEMORY  : r_bp2 = i_memory_rd_val;
        `STAGED_BP_WRITE   : r_bp2 = i_write_rd_val;
        `STAGED_BP_WRITE_BK: r_bp2 = i_write_back_rd_val;
        default:             r_bp2 = (|i_rs2) ? i_rs2_val : '0;
        endcase
    end

    assign  o_op1 = (i_alu_op1_sel == `ALU_SRC_OP1_PC)  ? { i_pc, 2'b0 } : r_bp1;
    assign  o_op2 = (i_alu_op2_sel == `ALU_SRC_OP2_IMM) ? i_imm : r_bp2;
    assign  o_bp1 = r_bp1;
    assign  o_bp2 = r_bp2;

endmodule
