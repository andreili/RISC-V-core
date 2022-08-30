#include <inttypes.h>
#include <string.h>

#define READ_REG32(addr) (*((volatile uint32_t*)addr))
#define WRITE_REG32(addr, data) (*((volatile uint32_t*)addr) = data)

#define SOC_UART_REG_ADDR 0x10000000

#define CORE_CLOCK_SPEED (80*1000*1000)
#define UART_BAUD_RATE (115200)

typedef union
{
    struct
    {
        uint32_t tx_full : 1;
        uint32_t rx_full : 1;
        uint32_t tx_overrun : 1;
        uint32_t rx_overrun : 1;
        uint32_t : 28;
    } bt;
    uint32_t dw;
} uart_state_reg_t;

typedef union
{
    struct
    {
        uint32_t tx_enable : 1;
        uint32_t rx_enable : 1;
        uint32_t tx_int_enable : 1;
        uint32_t rx_int_enable : 1;
        uint32_t tx_overrun_int_enable : 1;
        uint32_t rx_overrun_int_enable : 1;
        uint32_t hs_test_mode : 1;
        uint32_t : 25;
    } bt;
    uint32_t dw;
} uart_ctrl_reg_t;

typedef union
{
    struct
    {
        uint32_t tx : 1;
        uint32_t rx : 1;
        uint32_t tx_overrun : 1;
        uint32_t rx_overrun : 1;
        uint32_t : 28;
    } bt;
    uint32_t dw;
} uart_intr_reg_t;

typedef union
{
    struct
    {
        uint32_t value : 20;
        uint32_t : 12;
    } bt;
    uint32_t dw;
} uart_div_reg_t;

typedef struct
{
    uint32_t dr;
    uart_state_reg_t state;
    uart_ctrl_reg_t ctrl;
    uart_intr_reg_t intr;
    uart_div_reg_t div;
} uart_reg_t;

static const uart_reg_t* p_uart = (uart_reg_t*)SOC_UART_REG_ADDR;

void uart_init(void)
{
    uart_ctrl_reg_t ctrl = { .bt.rx_enable=1, .bt.tx_enable=1 };
    WRITE_REG32(&p_uart->ctrl, ctrl.dw);
    uint32_t div = ((CORE_CLOCK_SPEED / UART_BAUD_RATE) - 1);
    WRITE_REG32(&p_uart->div, div);
}

void uart_send_ch(char ch)
{
    uart_state_reg_t state;
    do
    {
        state.dw = READ_REG32(&p_uart->state);
    } while (state.bt.tx_full);
    WRITE_REG32(&p_uart->dr, ch);
}

void uart_send_str(const char* const str, uint32_t len)
{
    for (uint32_t i=0 ; i<len ; ++i)
    {
        uart_state_reg_t state;
        do
        {
            state.dw = READ_REG32(&p_uart->state);
        } while (state.bt.tx_full);
        WRITE_REG32(&p_uart->dr, str[i]);
    }
}

void entry_point(void)
{
    uart_init();
    static const char* p_str = "Hello RISC-V core!\n";
    uart_send_str(p_str, strlen(p_str));
    while (1);
}
