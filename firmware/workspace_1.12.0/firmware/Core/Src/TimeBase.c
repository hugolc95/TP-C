/*
 * TimeBase.c
 *
 *  Created on: Mar 10, 2023
 *      Author: hlecoz
 */

#include "TimeBase.h"

void TimeBaseStartIT(void){
	LL_TIM_EnableCounter(TIM21);
	LL_TIM_EnableUpdateEvent(TIM21);
}
