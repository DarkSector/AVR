#define F_CPU 8000000UL

#include <avr/io.h>
#include "blinkyutils.h"
#include "customutils.h"

int main(void) {
	
	led_setup();
	
	while(1) {
		led_on();
		delay_ms(1000);
		led_off();
		delay_ms(500);	
	}
	return 0;
}