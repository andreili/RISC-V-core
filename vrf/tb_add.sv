`timescale 1 ns / 1 ps

module tb_add
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
