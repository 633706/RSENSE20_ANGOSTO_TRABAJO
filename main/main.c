#include "main.h"
void app_main(void){

    UART_init();

    if(LSM6DSL_init() != 0){
     sprintf(msgTx_PC,"Fallo en la inicializacion del LSM6SDSL\n");
     while(1);
    }
     
    LSM6DSL_configPeriodicReadings();


    sprintf(msgTx_PC,"Inicializacion correcta\n");
    UART_send(msgTx_PC);
  

    vTaskDelay(1000 / portTICK_RATE_MS); //Wait a second to make sure everything has been set in the IMU

    while (1){
        if(GPIO_read()){
            LSM6DSL_readAcc(&accX,&accY,&accZ); 
            //this clear the INT1 pad in the IMU
            sprintf(msgTx_PC,"%d\t%d\t%d\n",accX,accY,accZ);
            UART_send(msgTx_PC);
        }
    }
}



