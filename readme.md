# RISC-V core
This is my hobby project for deeper study of SystemVerilog and CPU architecture

# Overviev
Core supported two modes - staged and pipelined. On staged mode, one instruction executed on 5 ticks of main clock. This behavior controlled by defines on defines.vh (MODE_STAGED).
For instrutions and data, core have a TCM memory with individual bus.

# TODO
- Extensions:
 - Zicsr extension (with Zicntr and Zihpm features, WIP).
 - M extension.
 - F extension.
- Interrupts.
- Add support for all modes on cache.

# Verification
Core have a ready verification envionment (vrf) and using a verilator software.
To run a TOP tests (supported "test", "dhrystone" firmware targets):

	make sim target=top fw=test

To run a architecture test:

	make arch

Validation environment support a output to terminal and simulation termination from FW - see a fw/common/sim.c to more details.