`timescale 1 ns / 1 ps

module top
(
    input   wire                        i_clk,
    input   wire                        i_reset_n
);

    wire        w_reset_n;
    wire[31:0]  w_wb_addr;
    wire[31:0]  w_wb_wdata;
    wire[31:0]  w_wb_rdata;
    wire        w_wb_we;
    wire[3:0]   w_wb_sel;
    wire        w_wb_stb;
    wire        w_wb_cyc;
    wire        w_wb_ack;

    debounce
    #(
        .LENGTH                         (4)
    )
    u_deb_reset
    (
        .i_clk                          (i_clk),
        .i_sig                          (i_reset_n),
        .o_sig                          (w_reset_n)
    );

    rv_core
    u_rv
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (w_reset_n),
        .o_wb_adr                       (w_wb_addr),
        .o_wb_dat                       (w_wb_wdata),
        .i_wb_dat                       (w_wb_rdata),
        .o_wb_we                        (w_wb_we),
        .o_wb_sel                       (w_wb_sel),
        .o_wb_stb                       (w_wb_stb),
        .i_wb_ack                       (w_wb_ack),
        .o_wb_cyc                       (w_wb_cyc)
    );

    localparam MAIN_NIC_SEL_WIDTH       = 4;
    localparam MAIN_NIC_SLAVES_COUNT    = 2 ** MAIN_NIC_SEL_WIDTH;
    localparam MAIN_NIC_SLAVE_TCM       = 0;
    localparam MAIN_NIC_SLAVE_UART      = 1;
    //localparam MAIN_NIC_SLAVE_I2C       = 2;
    //localparam MAIN_NIC_SLAVE_CCM       = 3;

    wire[(MAIN_NIC_SLAVES_COUNT-1):0]   w_main_slave_sel;
    wire[(MAIN_NIC_SLAVES_COUNT-1):0]   w_main_slave_ack;
    wire[(MAIN_NIC_SLAVES_COUNT-1):0][31:0]	w_main_slave_rdata;

    nic
    #(
        .ADDR_SEL_WIDTH                 (MAIN_NIC_SEL_WIDTH),
        .DATA_WIDTH                     (32)
    )
    u_nic_main
    (
        .i_nic_sel                      (1'b1),
        .i_addr_sel                     (w_wb_addr[31:28]),
        .i_rdata                        (w_main_slave_rdata),
        .i_ack                          (w_main_slave_ack),
        .o_slave_sel                    (w_main_slave_sel),
        .o_rdata                        (w_wb_rdata),
        .o_ack                          (w_wb_ack)
    );

    tcm
    #(
        .MEM_ADDR_WIDTH                 (13)
    )
    u_tcm
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (w_reset_n),
        .i_sel                          (w_main_slave_sel[MAIN_NIC_SLAVE_TCM]),
        .i_wb_addr                      (w_wb_addr),
        .i_wb_stb                       (w_wb_stb),
        .i_wb_cyc                       (w_wb_cyc),
        .i_wb_we                        (w_wb_we),
        .i_wb_sel                       (w_wb_sel),
        .i_wb_wdata                     (w_wb_wdata),
        .o_wb_ack                       (w_main_slave_ack[MAIN_NIC_SLAVE_TCM]),
        .o_wb_rdata                     (w_main_slave_rdata[MAIN_NIC_SLAVE_TCM])
    );

    wire    w_uart_tx, w_uart_rx, w_uart_txen;

    cmsdk_wb_uart
    U_UART
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (w_reset_n),
        .i_dev_sel                      (w_main_slave_sel[MAIN_NIC_SLAVE_UART]),
        .i_wb_adr                       (w_wb_addr),
        .o_wb_dat                       (w_main_slave_rdata[MAIN_NIC_SLAVE_UART]),
        .i_wb_dat                       (w_wb_wdata),
        .i_wb_we                        (w_wb_we),
        .i_wb_sel                       (w_wb_sel),
        .i_wb_stb                       (w_wb_stb),
        .o_wb_ack                       (w_main_slave_ack[MAIN_NIC_SLAVE_UART]),
        .i_wb_cyc                       (w_wb_cyc),
        .i_rxd                          (w_uart_rx),
        .o_txd                          (w_uart_tx),
        .o_txen                         (w_uart_txen)
    );

    assign w_uart_rx = '1;

endmodule
