`timescale 1 ns / 1 ps

module tcm
#
(
    parameter   MEM_ADDR_WIDTH          = 8
)
(
    input   wire                        i_clk,
    input   wire                        i_sel,
    input   wire[(MEM_ADDR_WIDTH+1):2]  i_addr,
    input   wire[3:0]                   i_write,
    input   wire[31:0]                  i_data,
    output  wire                        o_ack,
    output  wire[31:0]                  o_data
);

    localparam  MEM_SIZE = 2 ** MEM_ADDR_WIDTH;
    reg[31:0]   r_out;

`ifdef QUARTUS
    reg[3:0][7:0]   r_mem[0:MEM_SIZE-1];

    always_ff @(posedge i_clk)
    begin
        if (i_sel)
        begin
            if (i_write[0]) r_mem[i_addr][0] <= i_data[ 0+:8];
            if (i_write[1]) r_mem[i_addr][1] <= i_data[ 8+:8];
            if (i_write[2]) r_mem[i_addr][2] <= i_data[16+:8];
            if (i_write[3]) r_mem[i_addr][3] <= i_data[24+:8];
            r_out <= r_mem[i_addr];
        end;
    end
`else
    reg[31:0]   r_mem[0:MEM_SIZE-1];

    always_ff @(posedge i_clk)
    begin
        if (i_sel)
        begin
            if (i_write[0]) r_mem[i_addr][ 0+:8] <= i_data[ 0+:8];
            if (i_write[1]) r_mem[i_addr][ 8+:8] <= i_data[ 8+:8];
            if (i_write[2]) r_mem[i_addr][16+:8] <= i_data[16+:8];
            if (i_write[3]) r_mem[i_addr][24+:8] <= i_data[24+:8];
            r_out <= r_mem[i_addr];
        end;
    end
`endif

    assign o_data = r_out;
    assign  o_ack = i_sel;

    initial
    begin
    `ifdef TO_SIM
        string fw_file;
        if ($value$plusargs("TEST_FW=%s", fw_file))
            $readmemh(fw_file, r_mem);
        else
    `endif
    `ifndef QUARTUS
            $readmemh("../vrf/test_fw/out/risc.vh", r_mem);
    `endif
    end

endmodule
