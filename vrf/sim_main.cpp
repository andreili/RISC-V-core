#include <memory>
#include <verilated.h>
#include "Vtest_top.h"

double sc_time_stamp() { return 0; }

#define TICK_TIME 1000
#define TICK_PERIOD (TICK_TIME / 2)
#define SIM_TIME_MAX 1000
#define SIM_TIME_MAX_TICK (TICK_TIME * SIM_TIME_MAX)

int main(int argc, char** argv, char** env)
{
    if (false && argc && argv && env) {}
    Verilated::mkdir("logs");

    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->debug(0);
    contextp->randReset(2);
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    const std::unique_ptr<Vtest_top> top{new Vtest_top{contextp.get(), "TOP"}};

    // Set Vtop's input signals
    top->i_reset_n = 0;
    top->i_clk = 0;

    // Simulate until $finish
    while (!contextp->gotFinish())
    {
        contextp->timeInc(1);
        uint64_t cur_time = contextp->time();
        if (cur_time > SIM_TIME_MAX_TICK)
        {
            break;
        }

        if ((cur_time % TICK_PERIOD) == 0)
        {
            top->i_clk = !top->i_clk;
        }
        if (cur_time == 20250)
        {
            top->i_reset_n = !0;
        }
        if (cur_time == 22250)
        {
            top->i_reset_n = 0;
        }
        if (cur_time == 26250)
        {
            top->i_reset_n = !0;
        }
        top->eval();

        // Read outputs
       /* VL_PRINTF("[%" PRId64 "] clk=%x rstl=%x iquad=%" PRIx64 " -> oquad=%" PRIx64
                  " owide=%x_%08x_%08x\n",
                  contextp->time(), top->clk, top->reset_l, top->in_quad, top->out_quad,
                  top->out_wide[2], top->out_wide[1], top->out_wide[0]);*/
    }
    top->final();
#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif
    return 0;
}
