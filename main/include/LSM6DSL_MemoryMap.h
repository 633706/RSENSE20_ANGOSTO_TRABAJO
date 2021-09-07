#ifndef __LSM6DSL_MEMORY_MAP_H__
#define __LSM6DSL_MEMORY_MAP_H__


#define SAD_HIGH
/************** I2C Address *****************/

#define I2C_ADDRESS_LOW   0b1101010  // SAD[0] = 0
#define I2C_ADDRESS_HIGH  0b1101011  // SAD[0] = 1

/************** Who am I  *******************/

#define WHO_AM_I   0x6A

/************** Device Register  *******************/

#define FUNC_CFG_ACCESS     0X01

#define SENSOR_SYNC_TIME    0X04
#define SENSOR_RES_RATIO    0X05

#define FIFO_CTRL1  	    0X06
#define FIFO_CTRL2  	    0X07
#define FIFO_CTRL3  	    0X08
#define FIFO_CTRL4  	    0X09
#define FIFO_CTRL5  	    0X0A

#define DRDY_PULSE_CFG_G    0X0B
#define INT1_CTRL           0X0D
#define INT2_CTRL           0X0E
#define WHO_AM_I_REG        0X0F
#define CTRL1_XL            0X10
#define CTRL2_G             0X11
#define CTRL3_C             0X12
#define CTRL4_C             0X13
#define CTRL5_C             0X14
#define CTRL6_G             0X15
#define CTRL7_G             0X16
#define CTRL8_XL            0X17
#define CTRL9_XL            0X18
#define CTRL10_C            0X19
                            
#define MASTER_CONFIG  	    0X1A
#define WAKE_UP_SRC  	    0X1B
#define TAP_SRC  	        0X1C
#define D6D_SRC  	        0X1D
#define STATUS_REG  	    0X1E
                            
#define OUT_TEMP_L  	    0X20
#define OUT_TEMP_H  	    0X21
#define OUTX_L_G  	        0X22
#define OUTX_H_G  	        0X23
#define OUTY_L_G  	        0X24
#define OUTY_H_G  	        0X25
#define OUTZ_L_G  	        0X26
#define OUTZ_H_G  	        0X27
#define OUTX_L_XL  	        0X28
#define OUTX_H_XL  	        0X29
#define OUTY_L_XL  	        0X2A
#define OUTY_H_XL  	        0X2B
#define OUTZ_L_XL  	        0X2C
#define OUTZ_H_XL  	        0X2D
#define SENSORHUB1_REG      0X2E
#define SENSORHUB2_REG      0X2F
#define SENSORHUB3_REG      0X30
#define SENSORHUB4_REG      0X31
#define SENSORHUB5_REG      0X32
#define SENSORHUB6_REG      0X33
#define SENSORHUB7_REG      0X34
#define SENSORHUB8_REG      0X35
#define SENSORHUB9_REG      0X36
#define SENSORHUB10_REG     0X37
#define SENSORHUB11_REG     0X38
#define SENSORHUB12_REG     0X39
#define FIFO_STATUS1  	    0X3A
#define FIFO_STATUS2  	    0X3B
#define FIFO_STATUS3  	    0X3C
#define FIFO_STATUS4  	    0X3D
#define FIFO_DATA_OUT_L     0x3E
#define FIFO_DATA_OUT_H     0x3F
#define TIMESTAMP0_REG      0X40
#define TIMESTAMP1_REG      0X41
#define TIMESTAMP2_REG      0X42
    
#define TIMESTAMP_L  	    0X49
#define TIMESTAMP_H  	    0X4A
    
#define STEP_COUNTER_L      0X4B
#define STEP_COUNTER_H      0X4C
    
#define SENSORHUB13_REG     0X4D
#define SENSORHUB14_REG     0X4E
#define SENSORHUB15_REG     0X4F
#define SENSORHUB16_REG     0X50
#define SENSORHUB17_REG     0X51
#define SENSORHUB18_REG     0X52
    
#define FUNC_SRC  	        0X53
#define TAP_CFG1  	        0X58
#define TAP_THS_6D  	    0X59
#define INT_DUR2  	        0X5A
#define WAKE_UP_THS  	    0X5B
#define WAKE_UP_DUR  	    0X5C
#define FREE_FALL  	        0X5D
#define MD1_CFG  	        0X5E
#define MD2_CFG  	        0X5F
    
#define OUT_MAG_RAW_X_L     0X66
#define OUT_MAG_RAW_X_H     0X67
#define OUT_MAG_RAW_Y_L     0X68
#define OUT_MAG_RAW_Y_H     0X69
#define OUT_MAG_RAW_Z_L     0X6A
#define OUT_MAG_RAW_Z_H     0X6B
    
#define X_OFS_USR  	        0X73
#define Y_OFS_USR  	        0X74
#define Z_OFS_USR  	        0X75

#endif /*__LSM6DSL_MEMORY_MAP_H__*/