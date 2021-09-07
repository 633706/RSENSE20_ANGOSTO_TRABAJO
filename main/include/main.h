#ifndef __MAIN_H__
#define __MAIN_H__

//Librerarías estandar de  C
#include <stdio.h>
#include <string.h>
//#include <complex>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

//drivers propios ESP32
#include "UART.h"
#include "I2C.h"
#include "GPIO.h"

#include "LSM6DSL.h"

char msgTx_PC[255] = "Running\r\n";

int16_t accX = {0};
int16_t accY = {0};
int16_t accZ = {0};


#endif /*__MAIN_H__*/
