`timescale 1ps/1ps

`include "rv_defines.vh"

module rv_decode
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire                        i_stall,
    input   wire                        i_flush,
    input   ucode_t                     i_bus,
    output  decode_t                    o_bus
);

    logic[31:2] r_pc;
    logic[31:2] r_pc_p4;

    always_ff @(posedge i_clk)
    begin
        if (i_flush)
        begin
            r_pc <= '0;
            r_pc_p4 <= '0;
        end
        else if (!i_stall)
        begin
            r_pc <= i_bus.pc;
            r_pc_p4 <= i_bus.pc_p4;
        end
    end

    core_decode
    u_dec
    (
        .i_instr                        (i_bus.instr),
        .i_flush                        (i_flush),
        .i_pc                           (r_pc),
        .i_pc_p4                        (r_pc_p4),
        .o_bus                          (o_bus)
    );

    logic[127:0] w_dbg_instr;
    logic[127:0] w_dbg_alu_op;
    assign  w_dbg_instr = o_bus.dbg_instr;
    assign  w_dbg_alu_op = o_bus.dbg_alu_ctrl;

    initial
    begin
        o_bus = '0;
    end

endmodule
