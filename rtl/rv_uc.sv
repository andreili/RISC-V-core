`timescale 1ps/1ps

`include "rv_defines.vh"

module rv_uc
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire                        i_stall,
    input   wire                        i_flush,
    input   wire[31:0]                  i_data,
    input   wire[31:2]                  i_pc,
    input   wire[31:2]                  i_pc_p4,
    output  wire[31:2]                  o_pc,
    output  wire[31:2]                  o_pc_p4,
    output  wire[31:0]                  o_uc
);

    logic[31:0] r_instr;
    logic[31:2] r_pc;
    logic[31:2] r_pc_p4;
    logic       r_flush;
    logic       r_stall;
    logic[31:0] w_instr;
    logic[31:0] r_uc_code;

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

    always_ff @(posedge i_clk)
    begin
        if (i_flush)
        begin
            r_instr <= '0;
        end
        else if (!r_stall)
        begin
            r_instr <= i_data;
        end
    end

    always_ff @(posedge i_clk)
    begin
        r_flush <= i_flush;
        r_stall <= i_stall;
    end

    always_latch
    begin
        if ((!i_reset_n) | i_flush | r_flush)
        begin
            w_instr = '0;
        end
        else if (!i_stall)
        begin
            w_instr = r_stall ? r_instr : i_data;
        end
    end

    always_ff @(posedge i_clk)
    begin
        r_uc_code <= w_instr;
    end

    assign  o_pc = r_pc;
    assign  o_pc_p4 = r_pc_p4;
    assign  o_uc = r_uc_code;

endmodule
