#include "RTOS.h"
#define portBASE_TYPE	long

typedef uint32_t TickType_t;
void vTaskDelay( const TickType_t xTicksToDelay );
extern IWDG_HandleTypeDef hiwdg;

void StartTask02(void const * argument)
{
  static unsigned portBASE_TYPE uxPriority;
  uxPriority = uxTaskPriorityGet(StartTask02);
  while(1)
  {
      HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14);
      vTaskDelay(1000);
  }
}

void StartTask03(void const * argument)
{
  while(1)
  {

      vTaskDelay(3000);
  }
}
