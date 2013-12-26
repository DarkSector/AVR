#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	
	DDRB |= _BV(DDB4);
		
	while(1) {
		
		PORTB |= _BV(PORTB4);
		_delay_ms(1000);
		PORTB &= ~(PORTB);
		_delay_ms(1000);
	}
	return 0;
}