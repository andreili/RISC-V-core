`timescale 1ps/1ps

module debounce
#(
    parameter   LENGTH = 6
)
(
    input   wire                        i_clk,
    input   wire                        i_sig,
    output  wire                        o_sig
);

    localparam MAX_IDX = LENGTH - 1;

    reg     r_prev;
    reg[MAX_IDX:0] r_cnt;
    wire    w_all_ones;
    reg     r_out;

    always_ff @(posedge i_clk)
    begin
        r_prev <= i_sig;
    end

    always_ff @(posedge i_clk)
    begin
        if (r_prev != i_sig)
            r_cnt <= '0;
        else if (!w_all_ones)
            r_cnt <= r_cnt + 1'b1;
    end

    assign  w_all_ones = &r_cnt;

    always_ff @(posedge i_clk)
    begin
        if (w_all_ones)
        r_out <= r_prev;
    end

    assign  o_sig = r_out;

endmodule
