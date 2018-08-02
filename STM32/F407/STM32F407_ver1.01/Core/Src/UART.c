#include "UART.h"
#include "cmsis_os.h"

void vMainUART(void const * argument)
{
	while(1)
	{
		HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14|GPIO_PIN_15);
		osDelay(1000);

	}
}
