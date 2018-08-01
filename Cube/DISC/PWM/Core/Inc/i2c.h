#ifndef INC_I2C_H_
#define INC_I2C_H_

#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_def.h"

HAL_StatusTypeDef LCD_SendInternal(uint8_t lcd_addr, uint8_t data, uint8_t flags);
void LCD_SendCommand(uint8_t lcd_addr, uint8_t cmd);
void LCD_SendData(uint8_t lcd_addr, uint8_t data);
void LCD_Init(uint8_t lcd_addr);
void LCD_SendString(uint8_t lcd_addr, char *str);
void init();

#endif /* INC_I2C_H_ */
