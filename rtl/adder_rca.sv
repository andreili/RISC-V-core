`timescale 1 ns / 1 ps

/* verilator lint_off DECLFILENAME */
module adder_full
(
    input   wire                        i_a,
    input   wire                        i_b,
    input   wire                        i_c,
    output  wire                        o_sum,
    output  wire                        o_c
);

    assign o_sum = i_a ^ i_b ^ i_c;
    assign o_c = (i_a | i_b) & (i_a | i_c) & (i_b | i_c);

endmodule

module adder_rca
#(
    parameter   WIDTH = 32
)
(
    input   wire[(WIDTH-1):0]           i_a,
    input   wire[(WIDTH-1):0]           i_b,
    output  wire[(WIDTH-1):0]           o_sum
);

/* verilator lint_off UNOPTFLAT */
    logic[WIDTH:1] w_carry;

    adder_full
    af0
    (
        .i_a                    (i_a[0]),
        .i_b                    (i_b[0]),
        .i_c                    ('0),
        .o_sum                  (o_sum[0]),
        .o_c                    (w_carry[1])
    );

    adder_full
    af[30:1]
    (
        .i_a                    (i_a[30:1]),
        .i_b                    (i_b[30:1]),
        .i_c                    (w_carry[30:1]),
        .o_sum                  (o_sum[30:1]),
        .o_c                    (w_carry[31:2])
    );

    adder_full
    af31
    (
        .i_a                    (i_a[31]),
        .i_b                    (i_b[31]),
        .i_c                    (w_carry[31]),
        .o_sum                  (o_sum[31]),
        .o_c                    (w_carry[32])
    );
/* verilator lint_on UNOPTFLAT */

endmodule
/* verilator lint_on DECLFILENAME */
