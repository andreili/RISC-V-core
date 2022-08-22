`timescale 1 ns / 1 ps

module rv_alu
(
    input   wire[31:0]                  i_src_a,
    input   wire[31:0]                  i_src_b,
    input   wire[5:0]                   i_ctrl,
    output  wire[31:0]                  o_result,
    output  wire                        o_zero
);

`include "rv_defines.vh"

    wire        w_eq, w_lts, w_ltu;
    wire[31:0]  w_add, w_sub, w_xor, w_or, w_and, w_shl;
    wire[32:0]  w_shr;
    reg[31:0]   r_out;
    reg         r_compare;

    assign  w_eq  = i_src_a == i_src_b;
    assign  w_lts = $signed(i_src_a) < $signed(i_src_b);
    assign  w_ltu = i_src_a < i_src_b;

    assign  w_add = i_src_a + i_src_b;
    assign  w_sub = i_src_a - i_src_b;
    assign  w_xor = i_src_a ^ i_src_b;
    assign  w_or  = i_src_a | i_src_b;
    assign  w_and = i_src_a & i_src_b;
    assign  w_shl = i_src_a << i_src_b[4:0];
    assign  w_shr = $signed({i_ctrl[3] ? i_src_a[31] : 1'b0, i_src_a}) >>> i_src_b[4:0];
    
    always_comb
    begin
        case (i_ctrl[5:3])
        `ALU_CMP_EQ:   r_compare =  w_eq;
        `ALU_CMP_LTS:  r_compare =  w_lts;
        `ALU_CMP_LTU:  r_compare =  w_ltu;
        `ALU_CMP_NEQ:  r_compare = !w_eq;
        `ALU_CMP_NLTS: r_compare = !w_lts;
        `ALU_CMP_NLTU: r_compare = !w_ltu;
        default:      r_compare = 'x;
        endcase
    end

    always_comb
    begin
        case (i_ctrl[2:0])
        `ALU_CTRL_ADD: r_out = w_add;
        `ALU_CTRL_SUB: r_out = w_sub;
        `ALU_CTRL_XOR: r_out = w_xor;
        `ALU_CTRL_OR:  r_out = w_or;
        `ALU_CTRL_AND: r_out = w_and;
        `ALU_CTRL_SHL: r_out = w_shl;
        `ALU_CTRL_SHR: r_out = w_shr[31:0];
        `ALU_CTRL_CMP: r_out = { {31{1'b0}}, r_compare };
        endcase
    end

    assign  o_result = r_out;
    assign  o_zero = !(|r_out);

    /*wire[31:0]  w_src_b_inv;
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
    assign  o_zero = !(|o_result);*/

endmodule
