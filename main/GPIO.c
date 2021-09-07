#include "GPIO.h"

void GPIO_init(void){
	gpio_config_t IntGPIO_config = {
		.pin_bit_mask = INT_PIN_MASK,
		.intr_type = GPIO_INTR_DISABLE, //GPIO_INTR_HIGH_LEVEL
		.mode = GPIO_MODE_INPUT,
		.pull_up_en = GPIO_PULLUP_DISABLE,
		.pull_down_en = GPIO_PULLDOWN_ENABLE,
	};
	
	gpio_config(&IntGPIO_config);

}
int GPIO_read(void){
    return gpio_get_level(INT_PIN);
}

