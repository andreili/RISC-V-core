ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage

# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe -j 6
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
VERILATOR_FLAGS += -x-assign fast
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert
# Generate coverage analysis
VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt 
VERILATOR_FLAGS += --build

VERILATOR_INPUT = -f input.vc test_top.sv sim_main.cpp

TESTS_LIST = rv_fetch rv_decode rv_exec rv_memory rv_memory2 rw_write

default: top
#default: $(TESTS_LIST)

XLEN = 32
ROOTDIR = $(CURDIR)/riscv-arch-test
TARGETDIR = $(ROOTDIR)/riscv-target
RISCV_TARGET = mycore
RISCV_DEVICE = i
RVTEST_DEFINES = -march=rv32i -mabi=ilp32

include $(ROOTDIR)/riscv-test-suite/Makefile.include

rv%:
	@echo "--- Prepare test $@ ---"
	@rm -rf logs_$@ obj_dir
	$(VERILATOR) $(VERILATOR_FLAGS) -CFLAGS "-I../tb/ -DTOP_NAME=$@" -DTO_SIM -f input.vc $@.sv tb/tb.cpp tb_$@.cpp
	@mkdir -p logs_$@
	@echo "--- Run test $@ ---"
	@obj_dir/V$@ +trace || (exit 1)
	@rm -rf obj_dir
	@echo "--- Test $@ finished ---"
	gtkwave -a $@.gtkw -6 -7 logs_$@/wave.vcd

top:
	@rm -rf logs logs_$@ obj_dir
	@$(VERILATOR) $(VERILATOR_FLAGS) -CFLAGS "-I../tb/ -DTOP_NAME=$@" -DTO_SIM -f input.vc $@.sv tb/tb.cpp sim_$@.cpp
	@mkdir -p logs_$@
	obj_dir/Vtop +trace || (exit 1)
	@rm -rf obj_dir
#	@echo "-- COVERAGE ----------------"
#	@rm -rf logs/annotated
#	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat
	gtkwave -a $@.gtkw -6 -7 logs_$@/wave.vcd

obj_dir/Vtop:
	@rm -rf logs_top obj_dir
	@$(VERILATOR) $(VERILATOR_FLAGS) -CFLAGS "-I../tb/ -DTOP_NAME=top" -DTO_SIM -f input.vc top.sv tb/tb.cpp sim_top.cpp

test_%: $(work_dir_isa)/%.vh obj_dir/Vtop
	@obj_dir/Vtop +trace +TEST_FW=$<
	@if [ $$? -ne 0 ] ; then echo "$@ FAILED" ; exit 1 ; fi
	@mv logs_top/wave.vcd $@.vcd
	@rm -rf logs_top
#	gtkwave -a top.gtkw -6 -7 $@.vcd

tests_ls = $(addprefix test_,$(tests_name))

tests: $(tests_ls)

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean:: clean_test
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core
