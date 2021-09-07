#ifndef __GPIO_H__
#define __GPIO_H__
#include "driver/gpio.h"

#define ESP_INTR_FLAG_DEFAULT 0

#define INT_PIN_MASK GPIO_SEL_14
#define INT_PIN GPIO_NUM_14

void GPIO_init(void);
int GPIO_read(void);

#endif /*__GPIO_H__*/