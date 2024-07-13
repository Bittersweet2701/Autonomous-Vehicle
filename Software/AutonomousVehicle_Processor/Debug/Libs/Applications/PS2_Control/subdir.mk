################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libs/Applications/PS2_Control/PS2_Control.c 

OBJS += \
./Libs/Applications/PS2_Control/PS2_Control.o 

C_DEPS += \
./Libs/Applications/PS2_Control/PS2_Control.d 


# Each subdirectory must supply rules for building sources it contributes
Libs/Applications/PS2_Control/%.o Libs/Applications/PS2_Control/%.su Libs/Applications/PS2_Control/%.cyclo: ../Libs/Applications/PS2_Control/%.c Libs/Applications/PS2_Control/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I"D:/PROJECT/AutonomousVehicle/Autonomous-Vehicle/Software/AutonomousVehicle_Processor/Libs/Applications" -I"D:/PROJECT/AutonomousVehicle/Autonomous-Vehicle/Software/AutonomousVehicle_Processor/Libs/Middlewares" -I"D:/PROJECT/AutonomousVehicle/Autonomous-Vehicle/Software/AutonomousVehicle_Processor/Libs/Drivers" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Libs-2f-Applications-2f-PS2_Control

clean-Libs-2f-Applications-2f-PS2_Control:
	-$(RM) ./Libs/Applications/PS2_Control/PS2_Control.cyclo ./Libs/Applications/PS2_Control/PS2_Control.d ./Libs/Applications/PS2_Control/PS2_Control.o ./Libs/Applications/PS2_Control/PS2_Control.su

.PHONY: clean-Libs-2f-Applications-2f-PS2_Control

