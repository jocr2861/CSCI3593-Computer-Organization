################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include .settings/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: regression.xexe secondary-outputs

# Tool invocations
regression.xexe: $(OBJS) $(USER_OBJS) $(LDS)
	@echo 'Building target: $@'
	@echo 'Invoking: Codasip C Linker'
	up_riscv32i-ia-clang -nostdlib -Xlinker --defsym=_STACK_SIZE=0x4000 -Xlinker --defsym=_HEAP_SIZE=0x4000 -stdlib=newlib -o "regression.xexe" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

: 
	@echo 'Invoking: Codasip Linker Support Package'
	up_riscv32i-ia-xml2lds
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) regression.xexe
	-@echo ' '

secondary-outputs:

.PHONY: all clean dependents

-include ../makefile.targets
