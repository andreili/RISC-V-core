RM := rm -rf
TOOLCHAIN_NAME = riscv64-unknown-elf

PROJ_NAME = risc
WORK_DIR = out
LD_SCRIPT = riscv_soc.ld
DEV_ARCH = rv32i

AS = $(TOOLCHAIN_NAME)-as
GCC = $(TOOLCHAIN_NAME)-gcc
GXX = $(TOOLCHAIN_NAME)-g++
SIZE = $(TOOLCHAIN_NAME)-size
OBJDUMP = $(TOOLCHAIN_NAME)-objdump
OBJCOPY = $(TOOLCHAIN_NAME)-objcopy

EXECUTABLE = $(WORK_DIR)/$(PROJ_NAME).elf
LIST_FILE = $(WORK_DIR)/$(PROJ_NAME).list
BIN_FILE = $(WORK_DIR)/$(PROJ_NAME).bin
HEX_FILE = $(WORK_DIR)/$(PROJ_NAME).hex
MAP_FILE = $(WORK_DIR)/$(PROJ_NAME).map
VH_FILE = $(WORK_DIR)/$(PROJ_NAME).vh
MIF_FILE = $(WORK_DIR)/$(PROJ_NAME).mif

ARCH_FLAGS_ALL = -march=$(DEV_ARCH) -mabi=ilp32
ARCH_FLAGS = $(ARCH_FLAGS_ALL) -specs=nosys.specs
WARN_FLAGS = -Wall -Wextra -Wfatal-errors -Wno-unknown-pragmas
ifneq ($(debug),)
	DEBUG_FLAGS = -g3 -DDEBUG
endif
OPTIMIZE_FLAGS = -Os -ffunction-sections -fdata-sections -fearly-inlining -finline-small-functions
ifneq ($(lto),)
	OPTIMIZE_FLAGS += -flto
endif
C_FLAGS := $(ARCH_FLAGS) -fno-exceptions -fstack-usage -MMD -MP $(OPTIMIZE_FLAGS) $(WARN_FLAGS) $(DEBUG_FLAGS)
C_FLAGS += -Wno-strict-aliasing
CPP_FLAGS := $(C_FLAGS) -std=gnu++1z -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit
LD_FLAGS = $(ARCH_FLAGS) -T"$(LD_SCRIPT)" -Wl,-Map="$(MAP_FILE)" -Wl,--gc-sections -nodefaultlibs -nostartfiles -static
LIBS = -Wl,--start-group -lc -lnosys -lm -lgcc -lstdc++ -lsupc++ -Wl,--end-group

PROJ_DIR := $(shell pwd)

OBJS = init.o sim.o test_main.o
#OBJS = main.o
INC = . ../common/

OBJECTS := $(patsubst %, $(WORK_DIR)/%, $(OBJS))
INC_DIR := $(patsubst %, -I%, $(INC))
vpath %.c $(INC)
vpath %.cpp $(INC)
vpath %.hpp $(INC)
vpath %.S $(INC)

INC_DIR := $(sort $(INC_DIR))

DEPFILES := $(OBJECTS:%.o=%.d)

.SUFFIXES: .cpp .c .o .S

# All Target
all: secondary-outputs

$(WORK_DIR)/%.o: %.S
	$(info Compile $<)
	@$(GCC) -c $(ARCH_FLAGS_ALL) -o $@ $<
#	@$(AS) $(ARCH_FLAGS_ALL) "$<" -o "$@"

$(WORK_DIR)/%.o: %.c
	$(info Compile $<)
	@$(GCC) $(C_FLAGS) $(INC_DIR) -MF "$(WORK_DIR)/$*.d" -c "$<" -o "$@"

$(WORK_DIR)/%.o: %.cpp
	$(info Compile $<)
	@$(GXX) $(CPP_FLAGS) $(INC_DIR) -MF "$(WORK_DIR)/$*.d" -c "$<" -o "$@"

%.elf: $(WORK_DIR) $(OBJECTS)
	$(info Link $@)
	@$(GCC) -o "$@" $(LD_FLAGS) $(OBJECTS) $(LIBS)

size.stdout: $(EXECUTABLE)
	@$(SIZE)  $(EXECUTABLE)

$(LIST_FILE): $(EXECUTABLE)
	$(info Generate list file)
	@$(OBJDUMP) -hSCl --inlines $(EXECUTABLE) > "$(LIST_FILE)"

$(BIN_FILE): $(EXECUTABLE)
	$(info Generate binary file)
	@$(OBJCOPY) -O binary $(EXECUTABLE) "$(BIN_FILE)"
	$(info Generate Intel-HEX file)
	@$(OBJCOPY) -O ihex $(EXECUTABLE) "$(HEX_FILE)"

$(VH_FILE): $(BIN_FILE)
	$(info Generate VH file)
	@$(OBJCOPY) --verilog-data-width=4 --reverse-bytes=4 -I binary -O verilog $(BIN_FILE) $(VH_FILE)
	@cp $(VH_FILE) ../../sim/fw.vh

$(MIF_FILE): $(BIN_FILE)
	$(info Generate MIF file)
	@../../tools/mem_init_gen.py -i -of MIF --width 4 $(BIN_FILE) > $(MIF_FILE)

$(WORK_DIR):
	$(info Create work directory)
	@mkdir -p  $(WORK_DIR)

# Other Targets
clean:
	$(info Delete work directory)
	@$(RM) $(WORK_DIR)

secondary-outputs: size.stdout $(LIST_FILE) $(VH_FILE)
#	@$(RM) $(WORK_DIR)

.PHONY: all clean
.SECONDARY:

%.d: ;

include $(DEPFILES)

