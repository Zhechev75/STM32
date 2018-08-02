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

void vMainTaskMake2(void)
{
	xTaskCreate(vMainTask2, (const char *)"TASK1", 128, NULL, 1, NULL); //configMINIMAL_STACK_SIZE
	//xTaskCreate();
}

void vMainTask2(void *pvParameters)
{
	while(1)
	{
		HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);
		osDelay(100);
	}
	vTaskDelete(NULL);
}
