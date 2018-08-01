#include "PWM.h"

uint8_t count = 0;

void PWM_BasicGeneration(void)
{
	switch(count)
	{
		case 0:
				TIM1 -> CCR1 = 64000;
				count++;
				break;
		case 1:
				TIM1 -> CCR1 = 32000;
				count++;
				break;
		case 2:
				TIM1 -> CCR1 = 16000;
				count++;
				break;
		case 3:
				TIM1 -> CCR1 = 0;
				count++;
				break;
		case 4:
				TIM1 -> CCR1 = 16000;
				count++;
				break;
		case 5:
				TIM1 -> CCR1 = 32000;
				count = 0;
				break;
	}
}

/*void PWM_BasicGeneration2(void)
{
	for(uint16_t count2 = 0; count2 < 65535; count2 = count2 + 1000)
	{
		TIM1 -> CCR1 = count2;
	}

	for(uint16_t count2 = 65535; count2 > 0 ; count2 = count2 - 1000)
	{
			TIM1 -> CCR1 = count2;
	}
}*/
