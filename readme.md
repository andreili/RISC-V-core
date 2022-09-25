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
To run a TOP test, need to build firmare first:

	cd vrf/test_fv
	make
	cd ../
	make top

To run a architecture test:

	cd vrf/
	make tests

Validation environment support a output to terminal and simulation termination from FW - see a vrf/test_fw/sim.c to more details.