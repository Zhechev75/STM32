#include "adc.h"

#define LCD_ADDR (0x3F << 1)

extern ADC_HandleTypeDef hadc1;


uint16_t a;

uint16_t Adc1Conv(void)
{
	HAL_ADC_Start(&hadc1);
	HAL_ADC_PollForConversion(&hadc1, 100);
	a = HAL_ADC_GetValue(&hadc1);
	HAL_ADC_Stop(&hadc1);
	return a;
}

void Adc1LCD(void)
{
	char str[7];
	char str2[7];
	int Adc1Value;

	Adc1Value = Adc1Conv();
	int b = (int)Adc1Value * 0.7;
	sprintf(str,"%04d", a);
	sprintf(str2,"|%04dmV", b);

	LCD_SendCommand(LCD_ADDR, 0b11000000);
	LCD_SendString(LCD_ADDR, str); // значение в попугаях

	LCD_SendCommand(LCD_ADDR, 0b10001110);
    LCD_SendData(LCD_ADDR, 23);

	LCD_SendCommand(LCD_ADDR, 0b11000100);
	LCD_SendString(LCD_ADDR, str2);

}
