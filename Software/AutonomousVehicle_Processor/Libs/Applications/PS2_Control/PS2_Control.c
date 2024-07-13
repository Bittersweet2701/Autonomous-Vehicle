/*
 * PS2_Control.c
 *
 *  Created on: Jul 10, 2024
 *      Author: admin
 */

/*********************
 *      INCLUDES
 *********************/
#include "PS2_Control.h"

/*********************
 *      VARIABLES
 *********************/
uint8_t PSX_RX[8];
uint8_t PSX_TX[8] = {0x01, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
uint8_t state_set;

/**********************
 *     OPERATION
 **********************/
void PS2_Control(GPIO_TypeDef * GPIO_p, uint16_t GPIO_pin, SPI_HandleTypeDef *hspi,
                SERVO_Motor_t * const SERVO_Motor_p,
				BRUSHED_DC_Motor_t * const BRUSHED_DC_Motor_p)
{
    HAL_GPIO_WritePin(GPIO_p, GPIO_pin, GPIO_PIN_RESET);
    HAL_SPI_TransmitReceive(hspi, PSX_TX, PSX_RX, 8, 100);
    HAL_GPIO_WritePin(GPIO_p, GPIO_pin, GPIO_PIN_SET);
    switch (PSX_RX[3])
    {
    case FORWARD:
    	BRUSHED_DC_Motor_p->speed = LOW_SPEED;
    	BRUSHED_DC_Motor_p->direction = CLOCKWISE;
    	SERVO_Motor_p->set_steering(SERVO_Motor_p);
    	BRUSHED_DC_Motor_p->set_speed(BRUSHED_DC_Motor_p);
    	break;
    case BACKWARD:
    	BRUSHED_DC_Motor_p->speed = LOW_SPEED;
    	BRUSHED_DC_Motor_p->direction = COUNTER_CLOCKWISE;
    	SERVO_Motor_p->set_steering(SERVO_Motor_p);
    	BRUSHED_DC_Motor_p->set_speed(BRUSHED_DC_Motor_p);
    	break;
    default:
    	break;
    }
    static uint32_t time = 0;
    switch (PSX_RX[4])
    {
		case LEFT:
			state_set = 1;
			if (HAL_GetTick() - time > 1)
			{
				state_set = 2;
				time = HAL_GetTick();
			}
			break;
		case RIGHT:
			state_set = 10;
			if (HAL_GetTick() - time > 1)
			{
	            state_set = 20;
	            time = HAL_GetTick();
			}
	    case RESET_STEERING:
	    	SERVO_Motor_p->duty_steering = DUTY_CYCLE_MIDDLE;
	    	SERVO_Motor_p->set_steering(SERVO_Motor_p);
	        break;
	    case RESET_SPEEDING:
	    	BRUSHED_DC_Motor_p->speed = STOP_SPEED;
	        BRUSHED_DC_Motor_p->set_speed(BRUSHED_DC_Motor_p);
		default:
	        if (state_set == 2)
	        {
	        	SERVO_Motor_p->duty_steering -= 5;
	        	SERVO_Motor_p->set_steering(SERVO_Motor_p);
	        	state_set = 0;
	        }
	        if (state_set == 20)
	        {
	        	SERVO_Motor_p->duty_steering += 5;
	        	SERVO_Motor_p->set_steering(SERVO_Motor_p);
	            state_set = 0;
	        }
			break;
	}
}
