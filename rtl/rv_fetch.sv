`timescale 1ps/1ps

`include "rv_defines.vh"

module rv_fetch
#(
    parameter   RESET_ADDR = 32'h0000_0000
)
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire                        i_stall,
    input   wire                        i_exec_pc_sel,
    input   wire[31:2]                  i_exec_pc_target,
`ifdef MODE_STAGED
    input   wire                        i_pre_stall,
`endif
    output  wire[31:2]                  o_pc,
    output  wire[31:2]                  o_pc_p4
);

    reg [31:2]  r_fetch_pc;
    wire[31:2]  w_fetch_pc_next;
    wire[31:2]  w_fetch_pc_p4;
    reg[31:0]   r_rdata;

`ifdef MODE_STAGED
    // staged core workarround
    reg[31:2]   r_pc_latched;
    reg         r_pc_sel;
`endif

    assign  w_fetch_pc_p4 = r_fetch_pc + 1'b1;
`ifdef MODE_STAGED
    assign  w_fetch_pc_next = w_fetch_pc_p4;
`else
    assign  w_fetch_pc_next = i_exec_pc_sel   ? i_exec_pc_target   : 
                            w_fetch_pc_p4;
`endif

    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
        begin
            r_fetch_pc <= RESET_ADDR[31:2] - 1'b1;
        end
        // staged core workarround
    `ifdef MODE_STAGED
        else if (!i_pre_stall)
        begin
            // staged core workarround
            if (r_pc_sel)
                r_fetch_pc <= r_pc_latched;
            else
                r_fetch_pc <= w_fetch_pc_next;
        end
    `else
        else if ((!i_stall) || i_exec_pc_sel)
        begin
            r_fetch_pc <= w_fetch_pc_next;
        end
    `endif
    end

`ifdef MODE_STAGED
    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_pc_sel <= '0;
        // staged core workarround
        else if (i_exec_pc_sel)
        begin
            r_pc_latched <= i_exec_pc_target;
            r_pc_sel <= '1;
        end
        else if (!i_pre_stall)
        begin
            r_pc_sel <= '0;
        end
    end
`endif

    assign  o_pc = r_fetch_pc;
    assign  o_pc_p4 = w_fetch_pc_p4;

endmodule
