/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define JETSON_PARALLEL_INT_Pin GPIO_PIN_13
#define JETSON_PARALLEL_INT_GPIO_Port GPIOC
#define JETSON_PARALLEL_BIT7_Pin GPIO_PIN_14
#define JETSON_PARALLEL_BIT7_GPIO_Port GPIOC
#define JETSON_PARALLEL_BIT0_Pin GPIO_PIN_15
#define JETSON_PARALLEL_BIT0_GPIO_Port GPIOC
#define MOTOR_SPI_SO_Pin GPIO_PIN_2
#define MOTOR_SPI_SO_GPIO_Port GPIOC
#define MOTOR_SPI_SI_Pin GPIO_PIN_3
#define MOTOR_SPI_SI_GPIO_Port GPIOC
#define RIPPLE_COUNT_Pin GPIO_PIN_0
#define RIPPLE_COUNT_GPIO_Port GPIOA
#define ADC_MOTOR_VOLTAGE_Pin GPIO_PIN_1
#define ADC_MOTOR_VOLTAGE_GPIO_Port GPIOA
#define ADC_BATTERY_VOLTAGE_Pin GPIO_PIN_2
#define ADC_BATTERY_VOLTAGE_GPIO_Port GPIOA
#define JETSON_PARALLEL_CLK_Pin GPIO_PIN_3
#define JETSON_PARALLEL_CLK_GPIO_Port GPIOA
#define PS2_SPI_SCK_Pin GPIO_PIN_5
#define PS2_SPI_SCK_GPIO_Port GPIOA
#define PS2_SPI_MISO_Pin GPIO_PIN_6
#define PS2_SPI_MISO_GPIO_Port GPIOA
#define PS2_SPI_MOSI_Pin GPIO_PIN_7
#define PS2_SPI_MOSI_GPIO_Port GPIOA
#define PS2_SPI_CS_Pin GPIO_PIN_4
#define PS2_SPI_CS_GPIO_Port GPIOC
#define BUZZER_Pin GPIO_PIN_0
#define BUZZER_GPIO_Port GPIOB
#define JETSON_I2C_SCL_Pin GPIO_PIN_10
#define JETSON_I2C_SCL_GPIO_Port GPIOB
#define MOTOR_SPI_SCK_Pin GPIO_PIN_13
#define MOTOR_SPI_SCK_GPIO_Port GPIOB
#define TURNLEFT_LED_Pin GPIO_PIN_6
#define TURNLEFT_LED_GPIO_Port GPIOC
#define TURNLRIGHT_LED_Pin GPIO_PIN_7
#define TURNLRIGHT_LED_GPIO_Port GPIOC
#define LIGHTING_LED_Pin GPIO_PIN_8
#define LIGHTING_LED_GPIO_Port GPIOC
#define BRUSHED_MOTOR_IN1_Pin GPIO_PIN_8
#define BRUSHED_MOTOR_IN1_GPIO_Port GPIOA
#define BRUSHED_MOTOR_IN2_Pin GPIO_PIN_9
#define BRUSHED_MOTOR_IN2_GPIO_Port GPIOA
#define BRUSHED_MOTOR_ABE_Pin GPIO_PIN_10
#define BRUSHED_MOTOR_ABE_GPIO_Port GPIOA
#define BRUSHED_MOTOR_DIS_Pin GPIO_PIN_11
#define BRUSHED_MOTOR_DIS_GPIO_Port GPIOA
#define BRUSHED_MOTOR_SSSF_Pin GPIO_PIN_12
#define BRUSHED_MOTOR_SSSF_GPIO_Port GPIOA
#define SERVO_PWM_Pin GPIO_PIN_15
#define SERVO_PWM_GPIO_Port GPIOA
#define JETSON_PARALLEL_BIT3_Pin GPIO_PIN_10
#define JETSON_PARALLEL_BIT3_GPIO_Port GPIOC
#define JETSON_PARALLEL_BIT2_Pin GPIO_PIN_11
#define JETSON_PARALLEL_BIT2_GPIO_Port GPIOC
#define JETSON_PARALLEL_BIT1_Pin GPIO_PIN_12
#define JETSON_PARALLEL_BIT1_GPIO_Port GPIOC
#define JETSON_I2C_SDA_Pin GPIO_PIN_3
#define JETSON_I2C_SDA_GPIO_Port GPIOB
#define IMU_RESET_Pin GPIO_PIN_4
#define IMU_RESET_GPIO_Port GPIOB
#define JETSON_PARALLEL_BIT4_Pin GPIO_PIN_5
#define JETSON_PARALLEL_BIT4_GPIO_Port GPIOB
#define IMU_I2C_SCL_Pin GPIO_PIN_6
#define IMU_I2C_SCL_GPIO_Port GPIOB
#define IMU_I2C_SDA_Pin GPIO_PIN_7
#define IMU_I2C_SDA_GPIO_Port GPIOB
#define JETSON_PARALLEL_BIT5_Pin GPIO_PIN_8
#define JETSON_PARALLEL_BIT5_GPIO_Port GPIOB
#define JETSON_PARALLEL_BIT6_Pin GPIO_PIN_9
#define JETSON_PARALLEL_BIT6_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
