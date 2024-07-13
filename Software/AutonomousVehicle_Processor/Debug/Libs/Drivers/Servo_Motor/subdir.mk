################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libs/Drivers/Servo_Motor/Servo_Motor.c 

OBJS += \
./Libs/Drivers/Servo_Motor/Servo_Motor.o 

C_DEPS += \
./Libs/Drivers/Servo_Motor/Servo_Motor.d 


# Each subdirectory must supply rules for building sources it contributes
Libs/Drivers/Servo_Motor/%.o Libs/Drivers/Servo_Motor/%.su Libs/Drivers/Servo_Motor/%.cyclo: ../Libs/Drivers/Servo_Motor/%.c Libs/Drivers/Servo_Motor/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I"D:/PROJECT/AutonomousVehicle/Autonomous-Vehicle/Software/AutonomousVehicle_Processor/Libs/Applications" -I"D:/PROJECT/AutonomousVehicle/Autonomous-Vehicle/Software/AutonomousVehicle_Processor/Libs/Middlewares" -I"D:/PROJECT/AutonomousVehicle/Autonomous-Vehicle/Software/AutonomousVehicle_Processor/Libs/Drivers" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Libs-2f-Drivers-2f-Servo_Motor

clean-Libs-2f-Drivers-2f-Servo_Motor:
	-$(RM) ./Libs/Drivers/Servo_Motor/Servo_Motor.cyclo ./Libs/Drivers/Servo_Motor/Servo_Motor.d ./Libs/Drivers/Servo_Motor/Servo_Motor.o ./Libs/Drivers/Servo_Motor/Servo_Motor.su

.PHONY: clean-Libs-2f-Drivers-2f-Servo_Motor

