#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>



void led_setup(void){
	DDRB |= (1 << DDB0);
}

void led_on(void){
	// PORTB0 is in sink config
	// Meaning when pin is ground
	// LED will turn on
	PORTB = (0 << PORTB0);
}

void led_off(void){
	// sink config
	PORTB = (1 << PORTB0);
}

void delay_ms(unsigned int delaytime){
	int i = 0;
	for(i=0; i<=delaytime; i++){
		_delay_ms(1);
	}
}


int main(void) {
	// setup the leds
	led_setup();
	
	while(1) {
		led_on();
		delay_ms(1000);
		led_off();
		delay_ms(500);	
	}
	return 0;
}

