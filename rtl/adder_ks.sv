`timescale 1ps/1ps

/* verilator lint_off DECLFILENAME */
module grey(
    input  i_gj,
    input  i_pk,
    input  i_gk,
    output o_g
);
    wire e;
    and (e, i_gj, i_pk);
    or  (o_g, i_gk, e);
endmodule

module black(
    input  i_pj,
    input  i_gj,
    input  i_pk,
    input  i_gk,
    output o_g,
    output o_p
);
    wire e;
    and (e, i_gj, i_pk);
    or  (o_g, i_gk, e);
    and (o_p, i_pk, i_pj);
endmodule

module adder_ks
#(
    parameter   WIDTH = 32
)
(
    input   wire[(WIDTH-1):0]           i_a,
    input   wire[(WIDTH-1):0]           i_b,
    input   wire                        i_c,
    output  wire[(WIDTH-1):0]           o_sum,
    output  wire[(WIDTH-1):0]           o_and,
    output  wire[(WIDTH-1):0]           o_xor,
    output  wire                        o_carry
);
    
    wire [31:0] p1;
    wire [31:0] g1;
    
    wire [30:0] p2;
    wire [31:0] g2;
    
    wire [28:0] p3;
    wire [31:0] g3;
    
    wire [24:0] p4;
    wire [31:0] g4;
    
    wire [16:0] p5;
    wire [31:0] g5;
    
    wire [31:0] p6;
    wire [31:0] g6;

    assign p1 = i_a ^ i_b;
    assign g1 = i_a & i_b;

    grey gc_0(i_c, p1[0], g1[0], g2[0]);
    black bc_0[30:0](p1[30:0], g1[30:0], p1[31:1], g1[31:1], g2[31:1], p2[30:0]);

    assign g3[0] = g2[0];
    grey gc_1[1:0]({g2[0], i_c}, p2[1:0], g2[2:1], g3[2:1]);
    black bc_1[28:0](p2[28:0], g2[29:1], p2[30:2], g2[31:3], g3[31:3], p3[28:0]);

    assign g4[2:0] = g3[2:0];
    grey gc_2[3:0]({g3[2:0], i_c}, p3[3:0], g3[6:3], g4[6:3]);
    black bc_2[24:0](p3[24:0], g3[27:3], p3[28:4], g3[31:7], g4[31:7], p4[24:0]);

    assign g5[6:0] = g4[6:0];
    grey gc_3[7:0]({g4[6:0], i_c}, p4[7:0], g4[14:7], g5[14:7]);
    black bc_3[16:0](p4[16:0], g4[23:7], p4[24:8], g4[31:15], g5[31:15], p5[16:0]);

    assign g6[15:0] = g5[15:0];
    grey gc_4[16:1](g5[15:0], p5[16:1], g5[31:16], g6[31:16]);

    assign o_carry     = g6[31];
    assign o_sum[0]    = i_c ^ p1[0];
    assign o_sum[31:1] = g6[30:0] ^ p1[31:1];

    assign o_and = g1;
    assign o_xor = p1;

endmodule
/* verilator lint_on DECLFILENAME */
