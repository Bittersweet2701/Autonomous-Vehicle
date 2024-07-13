################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libs/Drivers/Auxiliary_System/Buzzer_System.c \
../Libs/Drivers/Auxiliary_System/Lighting_System.c 

OBJS += \
./Libs/Drivers/Auxiliary_System/Buzzer_System.o \
./Libs/Drivers/Auxiliary_System/Lighting_System.o 

C_DEPS += \
./Libs/Drivers/Auxiliary_System/Buzzer_System.d \
./Libs/Drivers/Auxiliary_System/Lighting_System.d 


# Each subdirectory must supply rules for building sources it contributes
Libs/Drivers/Auxiliary_System/%.o Libs/Drivers/Auxiliary_System/%.su Libs/Drivers/Auxiliary_System/%.cyclo: ../Libs/Drivers/Auxiliary_System/%.c Libs/Drivers/Auxiliary_System/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I"D:/PROJECT/AutonomousVehicle/Autonomous-Vehicle/Software/AutonomousVehicle_Processor/Libs/Applications" -I"D:/PROJECT/AutonomousVehicle/Autonomous-Vehicle/Software/AutonomousVehicle_Processor/Libs/Middlewares" -I"D:/PROJECT/AutonomousVehicle/Autonomous-Vehicle/Software/AutonomousVehicle_Processor/Libs/Drivers" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Libs-2f-Drivers-2f-Auxiliary_System

clean-Libs-2f-Drivers-2f-Auxiliary_System:
	-$(RM) ./Libs/Drivers/Auxiliary_System/Buzzer_System.cyclo ./Libs/Drivers/Auxiliary_System/Buzzer_System.d ./Libs/Drivers/Auxiliary_System/Buzzer_System.o ./Libs/Drivers/Auxiliary_System/Buzzer_System.su ./Libs/Drivers/Auxiliary_System/Lighting_System.cyclo ./Libs/Drivers/Auxiliary_System/Lighting_System.d ./Libs/Drivers/Auxiliary_System/Lighting_System.o ./Libs/Drivers/Auxiliary_System/Lighting_System.su

.PHONY: clean-Libs-2f-Drivers-2f-Auxiliary_System

