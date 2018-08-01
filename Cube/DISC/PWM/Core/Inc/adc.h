#ifndef INC_ADC_H_
#define INC_ADC_H_

#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#include <string.h>
#include <stdio.h>

uint16_t Adc1Conv(void); // преобразование ADC1
void Adc1LCD(void); // вывод данных ADC1 на LCD

#endif /* INC_ADC_H_ */
