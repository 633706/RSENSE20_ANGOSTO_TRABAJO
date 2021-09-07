#include "LSM6DSL.h"

uint8_t LSM6DSL_init(void){
    uint8_t WhoAmI;
    
    GPIO_init();
    if(I2C_init() != ESP_OK)
        return -1;
    
    LSM6DSL_WhoAmI(&WhoAmI);
    if(WhoAmI != WHO_AM_I)
        return -1;
    return 0;
}

void LSM6DSL_readAcc(int16_t * pX,int16_t * pY,int16_t * pZ){
    I2C_readRegisters(I2C_ADDRESS_HIGH,OUTX_L_XL,(uint8_t*)pX,2);
    I2C_readRegisters(I2C_ADDRESS_HIGH,OUTY_L_XL,(uint8_t*)pY,2);
    I2C_readRegisters(I2C_ADDRESS_HIGH,OUTZ_L_XL,(uint8_t*)pZ,2);
}

void LSM6DSL_configPeriodicReadings (void){
    uint8_t data;

    //1 bit = 2 byte threshold
    
    data = 0x01; //Acc in FIFO no decimation
    I2C_writeRegisters(I2C_ADDRESS_HIGH,FIFO_CTRL3,&data,1); 

    data = 0x80; //Enable FIFO threshold level use
    I2C_writeRegisters(I2C_ADDRESS_HIGH,FIFO_CTRL4,&data,1); 
    
    data = 0b01010001; //Enable FIFO ODR 6.66 KsHz and Continuous
    I2C_writeRegisters(I2C_ADDRESS_HIGH,FIFO_CTRL5,&data,1); 
    
    //data = 0x08 //interrupt FIFO threshold
    data = 0x01; //interrupt Acc data ready
    I2C_writeRegisters(I2C_ADDRESS_HIGH,INT1_CTRL,&data,1); 

    data = 0b01100010;
    /* ODR Acc & PowerMode = 6.66 KHz and Low power only
     * Full scale = 2g
     * Acc digital chain = enable
     * Acc analog chain bandwidth = 1.5KHz
     */
    I2C_writeRegisters(I2C_ADDRESS_HIGH,CTRL1_XL,&data,1); 
    //by default CTRL8_XL set the low path filter with ODR/2

}


void LSM6DSL_WhoAmI(uint8_t * whoAmI){
     I2C_readRegisters(I2C_ADDRESS_HIGH, WHO_AM_I_REG,whoAmI,1);
}
