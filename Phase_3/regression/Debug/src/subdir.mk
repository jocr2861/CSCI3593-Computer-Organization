################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../src/regression.s 

OBJS += \
./src/regression.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.s
	@echo 'Building file: $<'
	@echo 'Invoking: Codasip Assembler'
	up_riscv32i-ia-llvm-mc.exe -g --assemble -filetype=obj -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


