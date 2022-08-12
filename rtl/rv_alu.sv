`timescale 1 ns / 1 ps

module rv_alu
(
    input   wire[31:0]                  i_src_a,
    input   wire[31:0]                  i_src_b,
    input   wire[2:0]                   i_ctrl,
    output  wire[31:0]                  o_result,
    output  wire                        o_overflow,
    output  wire                        o_zero
);

    wire[31:0]  w_src_b_inv;
    wire[31:0]  w_src_b_med;
    wire[31:0]  w_sum;
    wire[31:0]  w_and;
    wire[31:0]  w_or;
    wire        w_overflow;
    wire        w_slt;
    wire[31:0]  w_slt_wide;

    assign  w_src_b_inv = ~i_src_b;
    assign  w_src_b_med = i_ctrl[0] ? w_src_b_inv : i_src_b;
    assign  w_sum = i_src_a + w_src_b_med;
    assign  w_and = i_src_a & i_src_b;
    assign  w_or  = i_src_a | i_src_b;
    assign  w_overflow = (
            !i_ctrl[1] &&
            (w_sum[31] ^ i_src_a[31]) &&
            (!(i_src_a[31] ^ i_src_b[31] ^ i_ctrl[0]))
            );
    assign  w_slt = (w_overflow ^ w_sum[31]);
    assign  w_slt_wide = {32{w_slt}};

    assign  o_result =
            (i_ctrl == 3'b000) ? w_sum      : 
            (i_ctrl == 3'b001) ? w_sum      : 
            (i_ctrl == 3'b010) ? w_and      : 
            (i_ctrl == 3'b011) ? w_or       : 
            (i_ctrl == 3'b101) ? w_slt_wide : 
            '0;
    assign  o_overflow = w_overflow;
    assign  o_zero = !(|o_result);

endmodule
