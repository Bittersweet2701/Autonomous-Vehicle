/*
 * PS2_Control.h
 *
 *  Created on: Jul 10, 2024
 *      Author: admin
 */

#ifndef DRIVERS_PS2_CONTROL_PS2_CONTROL_H_
#define DRIVERS_PS2_CONTROL_PS2_CONTROL_H_

/*********************
 *      INCLUDES
 *********************/
#include "main.h"
#include "Servo_Motor/Servo_Motor.h"
#include "Brushed_DC_Motor/Brushed_DC_Motor.h"

/*********************
 *      DEFINES
 *********************/
#define FORWARD 0xCF  			// R[3], R[3] FREE: 0xDF
#define BACKWARD 0x9F 			// R[3]
#define LEFT 0xEE     			// R[4], R[4] FREE: 0xEF
#define RIGHT 0xED    			// R[4]
#define RESET_STEERING 0xEB     // R[4]
#define RESET_SPEEDING 0xE7     // R[4]

/**********************
 *     OPERATION
 **********************/
void PS2_Control(GPIO_TypeDef * GPIO_p, uint16_t GPIO_pin, SPI_HandleTypeDef *hspi,
                SERVO_Motor_t * const SERVO_Motor_p,
				BRUSHED_DC_Motor_t * const BRUSHED_DC_Motor_p);

#endif /* DRIVERS_PS2_CONTROL_PS2_CONTROL_H_ */
