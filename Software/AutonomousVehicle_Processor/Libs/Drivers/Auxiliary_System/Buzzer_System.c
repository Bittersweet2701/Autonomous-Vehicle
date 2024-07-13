/*
 * Buzzer_System.c
 *
 *  Created on: Jul 10, 2024
 *      Author: admin
 */

/*********************
 *      INCLUDES
 *********************/
#include "Buzzer_System.h"
#include "stdlib.h"

/*********************
 *      DEFINES
 *********************/
#define DUTY_LONG_SOUND 50
#define DUTY_SHORT_SOUND 25

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void BUZZER_SYSTEM_Set_Sound(BUZZER_System_t * const BUZZER_System_p)
{
	HAL_TIM_PWM_Start(BUZZER_System_p->timer_p, BUZZER_System_p->timChannel);
	switch (BUZZER_System_p->timChannel)
	{
	case TIM_CHANNEL_1:
		if (BUZZER_System_p->sound_duration == LONG_SOUND)
			BUZZER_System_p->timer_p->Instance->CCR1 = DUTY_LONG_SOUND;
		if (BUZZER_System_p->sound_duration == SHORT_SOUND)
			BUZZER_System_p->timer_p->Instance->CCR1 = DUTY_SHORT_SOUND;
		break;
	case TIM_CHANNEL_2:
		if (BUZZER_System_p->sound_duration == LONG_SOUND)
			BUZZER_System_p->timer_p->Instance->CCR2 = DUTY_LONG_SOUND;
		if (BUZZER_System_p->sound_duration == SHORT_SOUND)
			BUZZER_System_p->timer_p->Instance->CCR2 = DUTY_SHORT_SOUND;
		break;
	case TIM_CHANNEL_3:
		if (BUZZER_System_p->sound_duration == LONG_SOUND)
			BUZZER_System_p->timer_p->Instance->CCR3 = DUTY_LONG_SOUND;
		if (BUZZER_System_p->sound_duration == SHORT_SOUND)
			BUZZER_System_p->timer_p->Instance->CCR3 = DUTY_SHORT_SOUND;
		break;
	case TIM_CHANNEL_4:
		if (BUZZER_System_p->sound_duration == LONG_SOUND)
			BUZZER_System_p->timer_p->Instance->CCR4 = DUTY_LONG_SOUND;
		if (BUZZER_System_p->sound_duration == SHORT_SOUND)
			BUZZER_System_p->timer_p->Instance->CCR4 = DUTY_SHORT_SOUND;
		break;
	}
}

void BUZZER_SYSTEM_Init(BUZZER_System_t * const BUZZER_System_p,
						TIM_HandleTypeDef * timer_p,
						uint32_t timChannel,
						void (* set_sound_func)(BUZZER_System_t * const BUZZER_System_p))
{
	BUZZER_System_p->timer_p = timer_p;
	BUZZER_System_p->timChannel = timChannel;
	BUZZER_System_p->sound_duration = LONG_SOUND;
	HAL_TIM_PWM_Start(BUZZER_System_p->timer_p, BUZZER_System_p->timChannel);
	BUZZER_SYSTEM_Set_Sound(BUZZER_System_p);
}

BUZZER_System_t * BUZZER_SYSTEM_Create(TIM_HandleTypeDef * timer_p,
										uint32_t timChannel,
										SOUND_Duration_t sound_duration)
{
	BUZZER_System_t * BUZZER_System_p = malloc(sizeof(BUZZER_System_t));
	if (BUZZER_System_p != NULL)
	{
		BUZZER_SYSTEM_Init(BUZZER_System_p, timer_p, timChannel, BUZZER_SYSTEM_Set_Sound);
	}
	return BUZZER_System_p;
}

void BUZZER_SYSTEM_Destroy(BUZZER_System_t * const BUZZER_System_p)
{
	free(BUZZER_System_p);
}
