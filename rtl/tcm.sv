`timescale 1 ns / 1 ps

module tcm
#
(
    parameter   MEM_ADDR_WIDTH          = 8
)
(
    input   wire                        i_clk,
    //
    input   wire[(MEM_ADDR_WIDTH+1):2]  i_inst_addr,
    input   wire                        i_inst_stall,
    input   wire                        i_inst_write,
    output  wire[31:0]                  o_inst,
    //
    //input   wire                        i_data_sel,
    input   wire[(MEM_ADDR_WIDTH+1):2]  i_data_addr,
    input   wire[3:0]                   i_data_write,
    input   wire[31:0]                  i_data,
    output  wire[31:0]                  o_data
);

    localparam  MEM_SIZE = 2 ** MEM_ADDR_WIDTH;

`ifdef QUARTUS
    wire[3:0] w_data_mask = (|i_data_write) ? i_data_write : '1;
    altsyncram
    altsyncram_component
    (
        .address_a (i_data_addr),
        .address_b (i_inst_addr),
        .byteena_a (w_data_mask),
        .clock0 (i_clk),
        .data_a (i_data),
        .data_b ({32{1'b0}}),
        .rden_a ('0),
        .rden_b (!i_inst_stall),
        .wren_a (|i_data_write),
        .wren_b ('0),
        .q_a (o_data),
        .q_b (o_inst),
        .aclr0 (1'b0),
        .aclr1 (1'b0),
        .addressstall_a (1'b0),
        .addressstall_b (1'b0),
        .byteena_b (1'b1),
        .clock1 (1'b1),
        .clocken0 (1'b1),
        .clocken1 (1'b1),
        .clocken2 (1'b1),
        .clocken3 (1'b1),
        .eccstatus ());
    defparam
        altsyncram_component.address_reg_b = "CLOCK0",
        altsyncram_component.byte_size = 8,
        altsyncram_component.clock_enable_input_a = "BYPASS",
        altsyncram_component.clock_enable_input_b = "BYPASS",
        altsyncram_component.clock_enable_output_a = "BYPASS",
        altsyncram_component.clock_enable_output_b = "BYPASS",
        altsyncram_component.indata_reg_b = "CLOCK0",
        altsyncram_component.init_file = "../../vrf/test_fw/out/risc.mif",
        altsyncram_component.intended_device_family = "Cyclone V",
        altsyncram_component.lpm_type = "altsyncram",
        altsyncram_component.numwords_a = MEM_SIZE,
        altsyncram_component.numwords_b = MEM_SIZE,
        altsyncram_component.operation_mode = "BIDIR_DUAL_PORT",
        altsyncram_component.outdata_aclr_a = "NONE",
        altsyncram_component.outdata_aclr_b = "NONE",
        altsyncram_component.outdata_reg_a = "UNREGISTERED",
        altsyncram_component.outdata_reg_b = "UNREGISTERED",
        altsyncram_component.power_up_uninitialized = "FALSE",
        altsyncram_component.read_during_write_mode_mixed_ports = "DONT_CARE",
        altsyncram_component.read_during_write_mode_port_a = "NEW_DATA_NO_NBE_READ",
        altsyncram_component.read_during_write_mode_port_b = "NEW_DATA_NO_NBE_READ",
        altsyncram_component.widthad_a = MEM_ADDR_WIDTH,
        altsyncram_component.widthad_b = MEM_ADDR_WIDTH,
        altsyncram_component.width_a = 32,
        altsyncram_component.width_b = 32,
        altsyncram_component.width_byteena_a = 4,
        altsyncram_component.width_byteena_b = 1,
        altsyncram_component.wrcontrol_wraddress_reg_b = "CLOCK0";
`else
    reg[31:0]   r_mem[MEM_SIZE];
    reg[31:0]   r_inst_out;
    reg[31:0]   r_data_out;

    always_ff @(posedge i_clk)
    begin
        if (i_data_write[0]) r_mem[i_data_addr][ 0+:8] <= i_data[ 0+:8];
        if (i_data_write[1]) r_mem[i_data_addr][ 8+:8] <= i_data[ 8+:8];
        if (i_data_write[2]) r_mem[i_data_addr][16+:8] <= i_data[16+:8];
        if (i_data_write[3]) r_mem[i_data_addr][24+:8] <= i_data[24+:8];
        r_data_out <= r_mem[i_data_addr];
    end

    always_ff @(posedge i_clk)
    begin
        if (i_inst_write)
        begin
            r_mem[i_inst_addr] <= i_data;
        end
        if (!i_inst_stall)
            r_inst_out <= r_mem[i_inst_addr];
    end

    assign o_inst = r_inst_out;
    assign o_data = r_data_out;
`endif

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
