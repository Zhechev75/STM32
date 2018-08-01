#include "i2c.h"

extern I2C_HandleTypeDef hi2c1;

void carp(void)
{
	HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14);
}

void i2c1_Transmit(uint8_t i2cData)
{
	HAL_I2C_Master_Transmit(&hi2c1, 0x3F << 1, &i2cData, 1, 100);
	HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_15);
}

