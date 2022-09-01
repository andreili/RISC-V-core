`timescale 1 ns / 1 ps

module rv_csr
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire                        i_flush,
    input   wire[11:0]                  i_idx,
    input   wire[1:0]                   i_op,
    input   wire                        i_sel,
    input   wire[4:0]                   i_imm,
    input   wire[31:0]                  i_data,
    output  wire[31:0]                  o_data
);

    reg[11:0]   r_idx;
    reg[1:0]    r_op;
    reg         r_sel;
    reg[4:0]    r_imm;
    reg[31:0]   r_data;

    always_ff @(posedge i_clk)
    begin
        if (i_flush || (!i_reset_n))
        begin
            r_idx <= '0;
            r_op <= '0;
            r_sel <= '0;
            r_imm <= '0;
            r_data <= '0;
        end
        else
        begin
            r_idx <= i_idx;
            r_op <= i_op;
            r_sel <= i_sel;
            r_imm <= i_imm;
            r_data <= i_data;
        end
    end

    assign  o_data = '0;

endmodule
