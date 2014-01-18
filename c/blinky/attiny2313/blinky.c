#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	
	DDRB |= (1 << DDB4);
	
	while(1) {
		
		PORTB = (1 << PORTB4);
		_delay_ms(100);
		PORTB = (0 << PORTB4);
		_delay_ms(100);
	}
	return 0;
}