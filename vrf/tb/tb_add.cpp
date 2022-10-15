#include <memory>
#include "tb.h"

double sc_time_stamp() { return 0; }

int on_step_cb(uint64_t time, TOP_CLASS* p_top)
{
    return 0;
}

int main(int argc, char** argv, char** env)
{
    TB* tb = new TB(TOP_NAME_STR, argc, argv);
    tb->init(on_step_cb);
    TOP_CLASS* top = tb->get_top();

    for (int i=0 ; i<32 ; ++i)
    {
        int a = (i >> 2) & 0x3;
        int b = (i >> 0) & 0x3;
        int c = (i >> 4) & 1;
        top->i_a = a;
        top->i_b = b;
        top->i_c = c;
        tb->run_steps(10);
        int test_s = a + b + c;
        int test_c = (test_s > 3) ? 1 : 0;
        test_s = test_s & 0x3;
        if ((test_s != top->o_s) || (test_c != top->o_c))
        {
            printf("Error!!! [%d] Expected %d+%d+%d=(%d)%d, got (%d)%d\n", i, a, b, c, test_c, test_s, top->o_c, top->o_s);
        }
    }

    tb->finish();
    top->final();
#if VM_COVERAGE
    //tb->get_context()->coveragep()->write(COV_FN);
#endif
    return 0;
}
