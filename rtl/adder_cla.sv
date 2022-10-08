`timescale 1 ns / 1 ps

module adder_cla
#(
    parameter   WIDTH = 32
)
(
    input   wire[(WIDTH-1):0]           i_a,
    input   wire[(WIDTH-1):0]           i_b,
    output  wire[(WIDTH-1):0]           o_sum
);

/* verilator lint_off UNOPTFLAT */
    logic[WIDTH:0]      w_carry;
    logic[(WIDTH-1):0]  w_carry_unused;
    logic[(WIDTH-1):0]  w_sum;
    logic[(WIDTH-1):0]  w_g;
    logic[(WIDTH-1):0]  w_p;

    assign w_sum = i_a ^ i_b ^ w_carry[(WIDTH-1):0];
    assign w_g = i_a & i_b;
    assign w_p = i_a | i_b;

    assign w_carry[0] = 1'b0;
    assign w_carry[WIDTH:1] = w_g | (w_p & w_carry[(WIDTH-1):0]);
/* verilator lint_on UNOPTFLAT */

    assign o_sum = w_sum;

endmodule
