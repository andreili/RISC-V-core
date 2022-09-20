`timescale 1 ns / 1 ps

`include "rv_defines.vh"

module rv_ctrl
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire                        i_fetch_bus_ack,
    input   wire[4:0]                   i_decode_rs1,
    input   wire[4:0]                   i_decode_rs2,
    input   wire                        i_decode_inv_instr,
    input   wire[4:0]                   i_exec_rs1,
    input   wire[4:0]                   i_exec_rs2,
    input   wire[4:0]                   i_exec_rd,
    input   wire                        i_exec_pc_sel,
    input   wire[1:0]                   i_exec_res_src,
    input   wire[4:0]                   i_memory_rd,
    input   wire                        i_memory_reg_write,
    input   wire[4:0]                   i_write_rd,
    input   wire                        i_write_reg_write,
    input   wire                        i_write_back_write,
    input   wire[4:0]                   i_write_back_rd,
`ifdef MODE_STAGED
    //input  wire[2:0]                    o_stage,
    output  wire                        o_fetch_pre_stall,
`endif
    output  wire[1:0]                   o_exec_bp_rs1,
    output  wire[1:0]                   o_exec_bp_rs2,
    output  wire                        o_fetch_stall,
    output  wire                        o_decode_stall,
    output  wire                        o_decode_flush,
    //output  wire                        o_exec_stall,
    output  wire                        o_exec_flush
);

`ifdef MODE_STAGED
    localparam  STAGE_FETCH             = 3'h1;
    localparam  STAGE_DECODE            = 3'h2;
    localparam  STAGE_EXECUTE           = 3'h3;
    localparam  STAGE_MEMORY            = 3'h4;
    localparam  STAGE_WRITE             = 3'h5;

    reg[2:0]    r_stage;
    reg[2:0]    r_stage_next;

    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_stage <= STAGE_MEMORY;
        else
            r_stage <= r_stage_next;
    end

    always_comb
    begin : next_stage
        case (r_stage)
            STAGE_FETCH:    r_stage_next = STAGE_DECODE;
            STAGE_DECODE:   r_stage_next = i_decode_inv_instr ? STAGE_DECODE : STAGE_EXECUTE;
            STAGE_EXECUTE:  r_stage_next = STAGE_MEMORY;
            STAGE_MEMORY:   r_stage_next = /*(i_wb_ack) ?*/ STAGE_WRITE/* : STAGE_MEMORY*/;
            STAGE_WRITE:    r_stage_next = STAGE_FETCH;
            default:        r_stage_next = STAGE_FETCH;
        endcase
    end

    //assign  o_stage       = r_stage;
    assign  o_exec_bp_rs1 = '0;
    assign  o_exec_bp_rs2 = '0;
    assign  o_fetch_pre_stall = !((r_stage == STAGE_WRITE) && (r_stage_next == STAGE_FETCH));
    assign  o_fetch_stall = (r_stage != STAGE_FETCH);
    assign  o_decode_stall = 1'b0;
    assign  o_decode_flush = !((r_stage == STAGE_FETCH) && (r_stage_next == STAGE_DECODE));
    assign  o_exec_flush = 1'b0;
`else

    reg         r_inv_instr;
    reg[1:0]    r_reset;

    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_inv_instr <= '0;
        else if (i_decode_inv_instr & (!o_decode_flush))
            r_inv_instr <= '1;
    end

    always_ff @(posedge i_clk)
    begin
        r_reset <= { r_reset[0], !i_reset_n };
    end

    wire    w_load_stall;
    wire    w_rs1_from_memory, w_rs1_from_write, w_rs1_from_write_back;
    wire    w_rs2_from_memory, w_rs2_from_write, w_rs2_from_write_back;

    assign  w_load_stall = r_inv_instr | (!i_fetch_bus_ack);

    assign  w_rs1_from_memory      = i_memory_reg_write & (|i_exec_rs1) & (i_exec_rs1 == i_memory_rd);
    assign  w_rs1_from_write       = i_write_reg_write  & (|i_exec_rs1) & (i_exec_rs1 == i_write_rd);
    assign  w_rs1_from_write_back  = i_write_back_write & (|i_exec_rs1) & (i_exec_rs1 == i_write_back_rd);
    assign  w_rs2_from_memory      = i_memory_reg_write & (|i_exec_rs2) & (i_exec_rs2 == i_memory_rd);
    assign  w_rs2_from_write       = i_write_reg_write  & (|i_exec_rs2) & (i_exec_rs2 == i_write_rd);
    assign  w_rs2_from_write_back  = i_write_back_write & (|i_exec_rs2) & (i_exec_rs2 == i_write_back_rd);

    reg[1:0]    r_bp_rs1, r_bp_rs2;

    always_comb
    begin
        if (w_rs1_from_memory) r_bp_rs1 = `STAGED_BP_MEMORY;
        else if (w_rs1_from_write) r_bp_rs1 = `STAGED_BP_WRITE;
        else if (w_rs1_from_write_back) r_bp_rs1 = `STAGED_BP_WRITE_BK;
        else r_bp_rs1 = `STAGED_BP_DIRECT;
    end

    always_comb
    begin
        if (w_rs2_from_memory) r_bp_rs2 = `STAGED_BP_MEMORY;
        else if (w_rs2_from_write) r_bp_rs2 = `STAGED_BP_WRITE;
        else if (w_rs2_from_write_back) r_bp_rs2 = `STAGED_BP_WRITE_BK;
        else r_bp_rs2 = `STAGED_BP_DIRECT;
    end

    //assign  o_exec_bp_rs1 = w_rs1_from_write ? `STAGED_BP_WRITE : (w_rs1_from_memory ? `STAGED_BP_MEMORY : `STAGED_BP_DIRECT);
    //assign  o_exec_bp_rs2 = w_rs2_from_write ? `STAGED_BP_WRITE : (w_rs2_from_memory ? `STAGED_BP_MEMORY : `STAGED_BP_DIRECT);
    assign  o_exec_bp_rs1 = r_bp_rs1;
    assign  o_exec_bp_rs2 = r_bp_rs2;
    assign  o_fetch_stall  = w_load_stall;
    assign  o_decode_stall = w_load_stall;
    assign  o_decode_flush = r_inv_instr | i_exec_pc_sel | r_reset[0];
    assign  o_exec_flush   = i_exec_pc_sel | w_load_stall | r_reset[1];

`endif

`ifdef TO_SIM
`ifdef MODE_STAGED
// DEBUG
    reg [127:0] dbg_ascii_stage, dbg_ascii_stage_next;

    always @* begin
        dbg_ascii_stage = "";
        if (r_stage == STAGE_FETCH)   dbg_ascii_stage = "fetch";
        if (r_stage == STAGE_DECODE)  dbg_ascii_stage = "decode";
        if (r_stage == STAGE_EXECUTE) dbg_ascii_stage = "execute";
        if (r_stage == STAGE_MEMORY)  dbg_ascii_stage = "memory";
        if (r_stage == STAGE_WRITE)   dbg_ascii_stage = "write";
    end

    always @* begin
        dbg_ascii_stage_next = "";
        if (r_stage_next == STAGE_FETCH)   dbg_ascii_stage_next = "fetch";
        if (r_stage_next == STAGE_DECODE)  dbg_ascii_stage_next = "decode";
        if (r_stage_next == STAGE_EXECUTE) dbg_ascii_stage_next = "execute";
        if (r_stage_next == STAGE_MEMORY)  dbg_ascii_stage_next = "memory";
        if (r_stage_next == STAGE_WRITE)   dbg_ascii_stage_next = "write";
    end

`endif
`endif

endmodule
