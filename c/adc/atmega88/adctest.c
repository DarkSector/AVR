#define F_CPU 8000000UL

#include <avr/io.h>
#include "adctest.h"
#include "customutils.h"

int main(void) {
	// setup led
	led_setup();
	// adc start
	adc_init();
	// adc channel select 4
	adc_channel_select_4();
	// start adc
	adc_start();
	
	while(1) {
		if (ADC < 128){
			led_off();
			// delay_ms(1000);			
		}
		else if (ADC >= 128) {
			led_on();
		}

	}
	return 0;
}