`timescale 1ps/1ps

module rv_csr
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire                        i_flush,
    input   wire                        i_instruction_executed,
    input   wire[11:0]                  i_idx,
    input   wire[1:0]                   i_op,
    input   wire                        i_sel,
    input   wire[4:0]                   i_imm,
    input   wire[31:0]                  i_data,
    output  wire[31:0]                  o_data
);

    /*reg[11:0]   r_idx;
    reg[1:0]    r_op;
    reg         r_sel;
    reg[4:0]    r_imm;*/
    reg[31:0]   r_data;

    /*always_ff @(posedge i_clk)
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
    end*/

    wire        w_csr_counters, w_csr_mcounters;
    wire[31:0]  w_data_counters;
    reg[31:0]   r_odata;


    assign  w_csr_mcounters = (i_idx[11:8] == 4'hb);
    assign  w_csr_counters  = (i_idx[11:8] == 4'hc);

    rv_csr_counters
    u_counters
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_instruction_executed         (i_instruction_executed),
        .i_idx                          (i_idx[7:0]),
        .o_data                         (w_data_counters)
    );

    always_comb
    begin
        case (1'b1)
        |{w_csr_mcounters, w_csr_counters}: r_odata = w_data_counters;
        default:                            r_odata = '0;
        endcase
    end

    assign  o_data = r_odata;

endmodule
