/*
 * Led.c
 *
 *  Created on: Mar 8, 2023
 *      Author: hlecoz
 */
#include "main.h"
#include "Led.h"

// Démarre le timer
void LedStart(void){
	LL_TIM_EnableCounter(TIM2);
	LL_TIM_CC_EnableChannel(TIM2, LL_TIM_CHANNEL_CH1);
}
// Configure le rapport cyclique de la PWM entre 0 et 255
void LedSetValue(uint8_t val){
	LL_TIM_OC_SetCompareCH1(TIM2, val);
}
// À chaque appel, cette fonction incrémente la luminosité de la LED
// Arrivé à la valeur maximale, chaque appel décrémente la LED
void LedPulse(void){
	static uint8_t dc = 0;
	static uint8_t up = 0;

	dc = up? dc+1: dc-1;

	if (dc >= 255) up = 0;
	else if (dc <= 0 ) up = 1;

	LedSetValue(dc);

}
