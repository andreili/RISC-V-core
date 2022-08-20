#include <inttypes.h>

void entry_point(void)
{
    uint32_t* p_mem = (uint32_t*)0x1000;
    for (int i=0 ; i<20 ; ++i)
    {
        p_mem[i] = i;
    }
    uint8_t* p_mem8 = (uint8_t*)0xffc;
    for (int i=0 ; i<20 ; ++i)
    {
        p_mem[i] = *(volatile uint8_t*)&p_mem8[i];
    }
    while (1);
}
