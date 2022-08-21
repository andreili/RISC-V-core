`timescale 1 ns / 1 ps

module rv_write
(
    input   wire                        i_clk,
    //input   wire                        i_reset_n,
    input   wire[31:0]                  i_data,
    input   wire[31:0]                  i_memory_data,
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

    reg[31:0]   r_data;
    reg[31:0]   r_alu_result;
    reg         r_reg_write;
    reg[4:0]    r_rd;
    reg[1:0]    r_res_src;
    reg[31:2]   r_pc_p4;
    //reg[31:2]   r_pc_target;
    reg[7:0]    r_data_byte;
    reg[15:0]   r_data_half_word;
    reg[31:0]   w_rdata;
    wire[31:0]  w_data;
    reg[2:0]    r_funct3;
    
    always_ff @(posedge i_clk)
    begin
        r_data <= i_data;
        r_alu_result <= i_alu_result;
        r_reg_write <= i_reg_write;
        r_rd <= i_rd;
        r_res_src <= i_res_src;
        r_pc_p4 <= i_pc_p4;
        //r_pc_target <= i_pc_target;
        r_funct3 <= i_funct3;
    end

    wire[31:0]  w_data_sel = (r_res_src == `RESULT_SRC_TCM) ? i_memory_data : r_data;

    always_comb
    begin
        case (r_alu_result[1:0])
        2'b00: r_data_byte = w_data_sel[ 0+:8];
        2'b01: r_data_byte = w_data_sel[ 8+:8];
        2'b10: r_data_byte = w_data_sel[16+:8];
        2'b11: r_data_byte = w_data_sel[24+:8];
        endcase
    end

    always_comb
    begin
        case (r_alu_result[1])
        1'b0: r_data_half_word = w_data_sel[ 0+:16];
        1'b1: r_data_half_word = w_data_sel[16+:16];
        endcase
    end

    always_comb
    begin
        case (r_funct3)
        3'b000: w_rdata = { {24{r_data_byte[7]}}, r_data_byte};
        3'b001: w_rdata = { {16{r_data_half_word[15]}}, r_data_half_word};
        3'b010: w_rdata = w_data_sel;
        3'b100: w_rdata = { {24{1'b0}}, r_data_byte};
        3'b101: w_rdata = { {16{1'b0}}, r_data_half_word};
        default:w_rdata = '0;
        endcase
    end

    assign  w_data = (r_res_src == `RESULT_SRC_ALU) ? r_alu_result :
                     (r_res_src == `RESULT_SRC_MEMORY) ? w_rdata :
                     (r_res_src == `RESULT_SRC_TCM) ? w_rdata :
                     (r_res_src == `RESULT_SRC_PC_P4) ? { r_pc_p4, 2'b00 } :
                      '0;

    assign  o_data = w_data;
    assign  o_rd = r_rd;
    assign  o_reg_write = r_reg_write;

endmodule
