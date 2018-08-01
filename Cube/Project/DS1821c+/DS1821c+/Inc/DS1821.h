#ifndef DS1821_H_
#define DS1821_H_

#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"

typedef union
    {
        uint8_t total;
        struct
        {
           uint8_t oneShot      : 1;
           uint8_t pol          : 1;
           uint8_t termostate   : 1;
           uint8_t nvb          : 1;
           uint8_t tlf          : 1;
           uint8_t thf          : 1;
           uint8_t done         : 1;
        };
    } uDs1821Status;

typedef struct
        {
           uDs1821Status   statusReg;
           int8_t          highTemp;
           int8_t          lowTemp;
           int8_t          temperature;
        } sDs1821;

void DS1821ReadStatus (sDs1821* ds);

#endif /* DS1821_H_ */
