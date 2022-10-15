#include <memory>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "tb.h"

double sc_time_stamp() { return 0; }

#define TICK_TIME 1000
#define TICK_PERIOD (TICK_TIME / 2)
#define SIM_TIME_MAX 1000
#define SIM_TIME_MAX_TICK (TICK_TIME * SIM_TIME_MAX)

typedef struct
{
    uint32_t instruction;
    union
    {
        struct
        {
            uint32_t : 32;
        };
        uint32_t dw;
    };
} test_data_t;

#define ROM_SIZE 12
test_data_t test_data[] = {
    { 0x01000093 },
    { 0x00209013 },
    { 0x0090a013 },
    { 0x00a0b013 },
    { 0x0010c013 },
    { 0x0020d013 },
    { 0x4030d013 },
    { 0x0050e013 },
    { 0x00f0f013 },
    { 0x0000a017 },
    { 0x0000c037 },
    { 0x00608067 }
};

bool on_step_cb(uint64_t time, TOP_CLASS* p_top)
{
    bool clk_prev = p_top->i_clk;
    if ((time % TICK_PERIOD) == 0)
    {
        p_top->i_clk = !p_top->i_clk;
    }
    return true;
}

bool run_tests(TB* p_tb, TOP_CLASS* p_top)
{
    // Set input signals
    p_top->i_reset_n = 0;
    p_top->i_clk = 0;
    p_top->i_stall = 0;
    p_top->i_flush = 0;
    p_top->i_bus_ack = 0;
    p_top->i_data = 0;
    p_top->i_pc = 0;
    p_top->i_pc_p4 = 1;

    // wait for reset
    p_top->i_reset_n = 0;
    p_tb->run_steps(4 * TICK_TIME);
    p_top->i_reset_n = 1;
    p_top->i_bus_ack = 1;

    for (int i=0 ; i<ROM_SIZE ; ++i)
    {
        p_top->i_data = test_data[i].instruction;
        p_tb->run_steps(TICK_TIME);
    }

    return true;
}

int main(int argc, char** argv, char** env)
{
    TB* tb = new TB(TOP_NAME_STR, argc, argv);
    tb->init(on_step_cb);
    TOP_CLASS* top = tb->get_top();
    
    if (!run_tests(tb, top))
    {
        //
    }
    tb->run_steps(4 * TICK_TIME);

    tb->finish();
    top->final();
#if VM_COVERAGE
    //tb->get_context()->coveragep()->write(COV_FN);
#endif
    return 0;
}
