ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage

# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe -j 4
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
VERILATOR_FLAGS += -x-assign fast
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace --trace-fst
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

default: sim wave

sim:
	@$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	@rm -rf logs
	@mkdir -p logs
	obj_dir/Vtest_top +trace
#	@echo "-- COVERAGE ----------------"
#	@rm -rf logs/annotated
#	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat

wave:
	gtkwave logs/wave.vcd

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core
