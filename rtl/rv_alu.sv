`timescale 1 ns / 1 ps

module rv_alu
(
    input   wire[31:0]                  i_src_a,
    input   wire[31:0]                  i_src_b,
    input   wire[4:0]                   i_ctrl,
    output  wire[31:0]                  o_result,
    output  wire                        o_zero
);

`include "rv_defines.vh"

    wire        w_eq, w_lts, w_ltu;
    wire[31:0]  w_add, w_sub, w_xor, w_or, w_and, w_shl;
    wire[32:0]  w_shr;
    reg[31:0]   r_out;

    assign  w_eq  = i_src_a == i_src_b;
    assign  w_lts = $signed(i_src_a) < $signed(i_src_b);
    assign  w_ltu = i_src_a < i_src_b;

    assign  w_add = i_src_a + i_src_b;
    assign  w_sub = i_src_a - i_src_b;
    assign  w_xor = i_src_a ^ i_src_b;
    assign  w_or  = i_src_a | i_src_b;
    assign  w_and = i_src_a & i_src_b;
    assign  w_shl = i_src_a << i_src_b[4:0];
    assign  w_shr = $signed({i_ctrl[4] ? i_src_a[31] : 1'b0, i_src_a}) >>> i_src_b[4:0];

    always_comb
    begin
        case (i_ctrl[3:0])
        `ALU_CMP_EQ:   r_out = { {31{1'b0}},  w_eq  };
        `ALU_CMP_LTS:  r_out = { {31{1'b0}},  w_lts };
        `ALU_CMP_LTU:  r_out = { {31{1'b0}},  w_ltu };
        `ALU_CMP_NEQ:  r_out = { {31{1'b0}}, !w_eq  };
        `ALU_CMP_NLTS: r_out = { {31{1'b0}}, !w_lts };
        `ALU_CMP_NLTU: r_out = { {31{1'b0}}, !w_ltu };
        `ALU_CTRL_ADD: r_out = w_add;
        `ALU_CTRL_SUB: r_out = w_sub;
        `ALU_CTRL_XOR: r_out = w_xor;
        `ALU_CTRL_OR:  r_out = w_or;
        `ALU_CTRL_AND: r_out = w_and;
        `ALU_CTRL_SHL: r_out = w_shl;
        `ALU_CTRL_SHR: r_out = w_shr[31:0];
        default:       r_out = 'x;
        endcase
    end

    assign  o_result = r_out;
    assign  o_zero = !(|r_out);

endmodule
