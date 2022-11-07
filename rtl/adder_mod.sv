`timescale 1ps/1ps

/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNOPTFLAT */

module ks2
(
    input   wire[1:0]                   i_a,
    input   wire[1:0]                   i_b,
    input   wire                        i_c,
    output  wire[1:0]                   o_s,
    output  wire                        o_c
);
    
    wire [1:0] p1;
    wire [1:0] g1;
    wire [1:0] g2;
    wire p2;
    wire g3;

    assign p1 = i_a ^ i_b;
    assign g1 = i_a & i_b;

    assign g2[0] = g1[0] | (i_c   & p1[0]);
    assign g2[1] = g1[1] | (g1[0] & p1[1]);
    assign p2    = p1[0] & p1[1];
    assign g3    = g2[1] | (i_c   & p2);

    assign o_c    = g3;
    assign o_s[0] = i_c   ^ p1[0];
    assign o_s[1] = g2[0] ^ p1[1];

endmodule

module adder_mod
#(
    parameter   WIDTH = 32
)
(
    input   wire[(WIDTH-1):0]           i_a,
    input   wire[(WIDTH-1):0]           i_b,
    output  wire[(WIDTH-1):0]           o_sum
);

    /*logic[WIDTH/2:0] w_carry;
    assign w_carry[0] = 1'b0;

    genvar i;
    generate
        for (i=0 ; i<WIDTH ; i+=2)
        begin
            ks2 add(i_a[i+1:i], i_b[i+1:i], w_carry[(i/2)], o_sum[i+1:i], w_carry[(i/2)+1]);
        end
    endgenerate*/

    logic[WIDTH/2:0] w_carry;
    assign w_carry[0] = 1'b0;

    genvar i;
    generate
        for (i=0 ; i<WIDTH ; i+=2)
        begin : sum
            logic[1:0] sum_0, sum_1;
            logic carry_0, carry_1;
            ks2 s0(i_a[i+1:i], i_b[i+1:i], 1'b0, sum_0[1:0], carry_0);
            ks2 s1(i_a[i+1:i], i_b[i+1:i], 1'b1, sum_1[1:0], carry_1);
            assign o_sum[i+1:i] = w_carry[(i/2)] ? sum_1 : sum_0;
            assign w_carry[(i/2)+1] = w_carry[(i/2)] ? carry_1 : carry_0;
        end
    endgenerate

endmodule
/* verilator lint_on UNOPTFLAT */
/* verilator lint_on DECLFILENAME */
