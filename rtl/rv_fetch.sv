`timescale 1 ns / 1 ps

module rv_fetch
#(
    parameter   RESET_ADDR = 32'h0000_0000
)
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire                        i_stall,
    input   wire                        i_pc_sel,
    input   wire[31:2]                  i_pc_target,
    input   wire                        i_bus_ack,
    input   wire[31:0]                  i_bus_rdata,
    input   wire                        i_pre_stall,
    output  wire[31:2]                  o_pc,
    output  wire[31:2]                  o_pc_p4
);

    reg [31:2]  r_fetch_pc;
    wire[31:2]  w_fetch_pc_next;
    wire[31:2]  w_fetch_pc_p4;
    reg[31:0]   r_rdata;
    wire        w_bus_request;
    reg         r_bus_request;

    // stage 1
    assign  w_fetch_pc_p4 = r_fetch_pc + 1'b1;
    assign  w_fetch_pc_next = i_pc_sel ? i_pc_target : w_fetch_pc_p4;

    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_fetch_pc <= RESET_ADDR[31:2] - 1;
        // staged core workarround
        //else if ((!i_stall) & i_bus_ack)
        else if (!i_pre_stall)
            r_fetch_pc <= w_fetch_pc_next;
    end

    assign  o_pc = r_fetch_pc;
    assign  o_pc_p4 = w_fetch_pc_p4;

endmodule
