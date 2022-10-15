#include <memory>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "tb.h"

double sc_time_stamp() { return 0; }

#define TICK_TIME 1000
#define TICK_PERIOD (TICK_TIME / 2)
#define SIM_TIME_MAX 1000
#define SIM_TIME_MAX_TICK (TICK_TIME * SIM_TIME_MAX)

#define ROM_SIZE 18
uint32_t inst_rom[] = {
    0x00000013, 0x01000093, 0x00108483, 0x00209503,
    0x0000A583, 0x049080A3, 0x04A09323, 0x04B0A423,
    0x0400A603, 0x03C0A683, 0x0440A703, 0x0480A783,
    0x00109113, 0x00215193, 0x0021E213, 0x00727293,
    0x00310333, 0x0000006F
};

bool on_step_cb(uint64_t time, TOP_CLASS* p_top)
{
    bool clk_prev = p_top->i_clk;
    if ((time % TICK_PERIOD) == 0)
    {
        p_top->i_clk = !p_top->i_clk;
    }

    bool is_rise_edge = p_top->i_clk & (!clk_prev);
    //bool is_fall_edge = (!p_top->i_clk) & clk_prev;
    static bool ack_pending;
    if (p_top->o_bus_request)
    {
        ack_pending = true;
    }
    if (((time % TICK_TIME) == 200) && ack_pending)
    {
        ack_pending = false;
        p_top->i_bus_ack = 1;
        p_top->i_bus_rdata = inst_rom[p_top->o_pc];
    }
    if (is_rise_edge)
    {
        p_top->i_bus_ack = 0;
    }
    //printf("Step #%d\n", time);
    return true;
}

bool run_test_normal_flow(TB* p_tb, TOP_CLASS* p_top)
{
    // wait for reset
    p_top->i_reset_n = 0;
    p_tb->run_steps(4 * TICK_TIME);
    p_top->i_reset_n = 1;
    
    p_tb->run_steps(TICK_TIME);
    if ((p_top->o_pc != 1) || (p_top->o_pc_p4 != 2))
    {
        printf("Normal flow error!\nValues:\n\tPC=0x%08x(expected 0x%08x)\n\tPC+4=0x%08x(expected 0x%08x)\n",
            p_top->o_pc, 1, p_top->o_pc_p4, 2);
        return false;
    }
    
    p_tb->run_steps(TICK_TIME);
    if ((p_top->o_pc != 2) || (p_top->o_pc_p4 != 3))
    {
        printf("Normal flow error!\nValues:\n\tPC=0x%08x(expected 0x%08x)\n\tPC+4=0x%08x(expected 0x%08x)\n",
            p_top->o_pc, 2, p_top->o_pc_p4, 3);
        return false;
    }

    printf("Normal flow os Ok\n");
    return true;
}

bool run_tests(TB* p_tb, TOP_CLASS* p_top)
{
    // Set input signals
    p_top->i_reset_n = 0;
    p_top->i_clk = 0;
    p_top->i_stall = 0;
    p_top->i_pc_sel = 0;
    p_top->i_pc_target = 0;
    p_top->i_bus_ack = 0;
    p_top->i_bus_rdata = 0;

    if (!run_test_normal_flow(p_tb, p_top))
        return false;

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
