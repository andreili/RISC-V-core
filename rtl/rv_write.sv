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

    reg[7:0]    r_data_byte;
    reg[15:0]   r_data_half_word;
    reg[31:0]   w_rdata;
    wire[31:0]  w_data;

    always_comb
    begin
        case (i_alu_result[1:0])
        2'b00: r_data_byte = i_data[ 0+:8];
        2'b01: r_data_byte = i_data[ 8+:8];
        2'b10: r_data_byte = i_data[16+:8];
        2'b11: r_data_byte = i_data[24+:8];
        endcase
    end

    always_comb
    begin
        case (i_alu_result[1])
        1'b0: r_data_half_word = i_data[ 0+:16];
        1'b1: r_data_half_word = i_data[16+:16];
        endcase
    end

    always_comb
    begin
        case (i_funct3)
        3'b000: w_rdata = { {24{r_data_byte[7]}}, r_data_byte};
        3'b001: w_rdata = { {16{r_data_half_word[15]}}, r_data_half_word};
        3'b010: w_rdata = i_data;
        3'b100: w_rdata = { {24{1'b0}}, r_data_byte};
        3'b101: w_rdata = { {16{1'b0}}, r_data_half_word};
        default:w_rdata = '0;
        endcase
    end

    assign  w_data = (i_res_src == `RESULT_SRC_ALU) ? i_alu_result :
                     (i_res_src == `RESULT_SRC_MEMORY) ? w_rdata :
                     (i_res_src == `RESULT_SRC_PC_P4) ? { i_pc_p4, 2'b00 } :
                      '0;

    assign  o_data = w_data;
    assign  o_rd = i_rd;
    assign  o_reg_write = i_reg_write;

endmodule
