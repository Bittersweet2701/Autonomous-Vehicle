################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS/subdir.mk
-include Middlewares/Third_Party/FreeRTOS/Source/subdir.mk
-include Libs/Drivers/Voltage_Measure/subdir.mk
-include Libs/Drivers/Servo_Motor/subdir.mk
-include Libs/Drivers/Ripple_Current_Counter/subdir.mk
-include Libs/Drivers/Brushed_DC_Motor/subdir.mk
-include Libs/Drivers/Auxiliary_System/subdir.mk
-include Libs/Applications/Steering_Control/subdir.mk
-include Libs/Applications/Speeding_Control/subdir.mk
-include Libs/Applications/PS2_Control/subdir.mk
-include Libs/Applications/Brushed_Motor_Diagnosis/subdir.mk
-include Libs/Applications/Auxiliary_Control/subdir.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := AutonomousVehicle_Processor
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
AutonomousVehicle_Processor.elf \

MAP_FILES += \
AutonomousVehicle_Processor.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
AutonomousVehicle_Processor.list \


# All Target
all: main-build

# Main-build Target
main-build: AutonomousVehicle_Processor.elf secondary-outputs

# Tool invocations
AutonomousVehicle_Processor.elf AutonomousVehicle_Processor.map: $(OBJS) $(USER_OBJS) D:\PROJECT\AutonomousVehicle\Autonomous-Vehicle\Software\AutonomousVehicle_Processor\STM32F401RETX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "AutonomousVehicle_Processor.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\PROJECT\AutonomousVehicle\Autonomous-Vehicle\Software\AutonomousVehicle_Processor\STM32F401RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="AutonomousVehicle_Processor.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

AutonomousVehicle_Processor.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "AutonomousVehicle_Processor.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) AutonomousVehicle_Processor.elf AutonomousVehicle_Processor.list AutonomousVehicle_Processor.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
