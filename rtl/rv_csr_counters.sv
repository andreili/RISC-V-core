`timescale 1 ns / 1 ps

module rv_csr_counters
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire                        i_instruction_executed,
    input   wire[7:0]                   i_idx,
    output  wire[31:0]                  o_data
);

`include "rv_defines.vh"

`ifdef EXTENSION_Zicntr
    reg[63:0]   r_cycle;
    //reg[63:0]   r_time;
    reg[63:0]   r_instret;

    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
        begin
            r_cycle <= '0;
            //r_time <= '0;
            r_instret <= '0;
        end
        else
        begin
            r_cycle <= r_cycle + 1'b1;
            if (i_instruction_executed)
                r_instret <= r_instret + 1'b1;
        end
    end
`endif

    logic[31:0] r_data;

    always_comb
    begin
        case (i_idx)
    `ifdef EXTENSION_Zicntr
        8'h00:   r_data = r_cycle[31:0];
        8'h01:   r_data = r_cycle[31:0];//r_time[31:0];
        8'h02:   r_data = r_instret[31:0];
        8'h80:   r_data = r_cycle[63:32];
        8'h81:   r_data = r_cycle[63:32];//r_time[63:32];
        8'h82:   r_data = r_instret[63:32];
    `endif
    `ifdef EXTENSION_Zihpm
    `endif
        default: r_data = '0;
        endcase
    end

    assign  o_data = r_data;

endmodule
