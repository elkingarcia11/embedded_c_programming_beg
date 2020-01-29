################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
004LedOn.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
004LedOn.list \

OBJCOPY_BIN += \
004LedOn.bin \


# All Target
all: 004LedOn.elf secondary-outputs

# Tool invocations
004LedOn.elf: $(OBJS) $(USER_OBJS) /Volumes/ELKFLASHELK/Embedded-C/my_workspace/target/004LedOn/STM32F407VGTX_FLASH.ld
	arm-none-eabi-gcc -o "004LedOn.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/Volumes/ELKFLASHELK/Embedded-C/my_workspace/target/004LedOn/STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="004LedOn.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

004LedOn.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "004LedOn.list"
	@echo 'Finished building: $@'
	@echo ' '

004LedOn.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "004LedOn.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
