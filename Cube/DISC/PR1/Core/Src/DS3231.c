#include "DS3231.h"

#define LCD_ADDR (0x3F << 1) //I2c адрес устройства

extern I2C_HandleTypeDef hi2c1;

uint32_t dataReceive;
uint8_t sec;
uint8_t min;
uint8_t hour;
uint8_t adress = 0xD0;

void WriteDS(void)
{
	uint8_t DataTime[] = {0x00, 0x40, 0x13, 0x28};
	HAL_I2C_Master_Transmit(&hi2c1, adress, &DataTime, 4, 100);
}

void ReadDS(void)
{
	HAL_I2C_Master_Receive(&hi2c1, adress, &dataReceive, 3, 100);
	sec = (uint8_t)(dataReceive >> 16);
	char str[3];
	sprintf(str,"%03d", sec);


	LCD_SendCommand(LCD_ADDR, 0b10000000);
	LCD_SendString(LCD_ADDR, str); // значение в попугаях
}
