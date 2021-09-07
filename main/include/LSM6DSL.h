#ifndef __LSM6DSL_H__
#define __LSM6DSL_H__

#include "LSM6DSL_MemoryMap.h"
#include "I2C.h"
#include "GPIO.h"

uint8_t LSM6DSL_init(void);
void LSM6DSL_configPeriodicReadings(void);
void LSM6DSL_readAcc(int16_t * pX,int16_t * pY,int16_t * pZ);
void LSM6DSL_WhoAmI(uint8_t * whoAmI);

#endif /*__LSM6DSL__*/

