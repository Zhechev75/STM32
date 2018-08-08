#ifndef INC_RTOS_H_
#define INC_RTOS_H_

//extern osStatus osDelay(uint32_t millisec)

#include "stm32f4xx_hal.h"
#include "stm32f4xx.h"



void StartTask02(void const * argument);
void StartTask03(void const * argument);

#endif /* INC_RTOS_H_ */
