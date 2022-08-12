#include <memory>
#include <verilated.h>
#include <verilated_vcd_c.h>
//#include "Vrv_fetch.h"

#define rtl_name rv_fetch

#define STRINGIFY_MACRO(x) STR(x)
#define STR(x) #x
#define EXPAND(x) x
#define CONCAT3(n1, n2, n3) STRINGIFY_MACRO(EXPAND(n1)EXPAND(n2)EXPAND(n3))

#define WAVE_FN CONCAT3(logs/wave_,rtl_name,.vcd)

#include CONCAT3(V,rtl_name,.h)

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

    const std::unique_ptr<Vrv_fetch> top{new Vrv_fetch{contextp.get(), "TOP"}};

    Verilated::traceEverOn(true);
    VerilatedVcdC* vvcd = new VerilatedVcdC;
    top->trace(tfp, 99);
    vvcd->open(WAVE_FN);

    // Set input signals
    top->i_reset_n = 0;
    top->i_clk = 0;

    for(int i=0 ; i<100 ; ++i)
    {
        contextp->timeInc(1);

        if (i & 1)
            top->i_clk = 1;
        else
            top->i_clk = 0;

        top->eval();
        vvcd->dump(contextp->time());
    }

    vvcd->close();
    top->final();
#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif
    return 0;
}
