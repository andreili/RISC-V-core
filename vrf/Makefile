ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage

# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
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

rv%:
	@echo "--- Prepare test $@ ---"
	@rm -rf logs logs_$@ obj_dir
	$(VERILATOR) $(VERILATOR_FLAGS) -CFLAGS "-I../tb/ -DTOP_NAME=$@" -DTO_SIM -f input.vc $@.sv tb/tb.cpp tb_$@.cpp
	@mkdir -p logs_$@
	@echo "--- Run test $@ ---"
	@obj_dir/V$@ +trace || (exit 1)
#	@rm -rf obj_dir logs
	@echo "--- Test $@ finished ---"
	gtkwave -a $@.gtkw -6 -7 logs_$@/wave.vcd

top:
	@rm -rf logs logs_$@ obj_dir
	@$(VERILATOR) $(VERILATOR_FLAGS) -CFLAGS "-I../tb/ -DTOP_NAME=$@" -DTO_SIM -f input.vc $@.sv tb/tb.cpp sim_$@.cpp
	@mkdir -p logs_$@
	obj_dir/Vtop +trace || (exit 1)
#	@rm -rf obj_dir logs
#	@echo "-- COVERAGE ----------------"
#	@rm -rf logs/annotated
#	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat
	gtkwave -a $@.gtkw -6 -7 logs_$@/wave.vcd

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core
