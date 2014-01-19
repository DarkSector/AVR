#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <avr/io.h>

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