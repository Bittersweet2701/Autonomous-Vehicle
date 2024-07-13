################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libs/Drivers/Voltage_Measure/Voltage_Measure.c 

OBJS += \
./Libs/Drivers/Voltage_Measure/Voltage_Measure.o 

C_DEPS += \
./Libs/Drivers/Voltage_Measure/Voltage_Measure.d 


# Each subdirectory must supply rules for building sources it contributes
Libs/Drivers/Voltage_Measure/%.o Libs/Drivers/Voltage_Measure/%.su Libs/Drivers/Voltage_Measure/%.cyclo: ../Libs/Drivers/Voltage_Measure/%.c Libs/Drivers/Voltage_Measure/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I"D:/PROJECT/AutonomousVehicle/Autonomous-Vehicle/Software/AutonomousVehicle_Processor/Libs/Applications" -I"D:/PROJECT/AutonomousVehicle/Autonomous-Vehicle/Software/AutonomousVehicle_Processor/Libs/Middlewares" -I"D:/PROJECT/AutonomousVehicle/Autonomous-Vehicle/Software/AutonomousVehicle_Processor/Libs/Drivers" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Libs-2f-Drivers-2f-Voltage_Measure

clean-Libs-2f-Drivers-2f-Voltage_Measure:
	-$(RM) ./Libs/Drivers/Voltage_Measure/Voltage_Measure.cyclo ./Libs/Drivers/Voltage_Measure/Voltage_Measure.d ./Libs/Drivers/Voltage_Measure/Voltage_Measure.o ./Libs/Drivers/Voltage_Measure/Voltage_Measure.su

.PHONY: clean-Libs-2f-Drivers-2f-Voltage_Measure

