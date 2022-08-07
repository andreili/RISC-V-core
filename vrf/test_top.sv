`timescale 1 ns / 1 ps

module test_top
(
    input   wire                        i_clk,
    input   wire                        i_reset_n
);

core core
(
    .i_clk                              (i_clk),
    .i_reset_n                          (i_reset_n)
);

initial begin
    if ($test$plusargs("trace") != 0) begin
        $dumpfile("logs/wave.vcd");
        $dumpvars();
     end
end

endmodule
