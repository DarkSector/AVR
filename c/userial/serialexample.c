#define F_CPU 8000000UL /*Using the internal clock with 8 prescalar*/
#define BAUD 9600UL
#define BAUD_PRESCALE ((F_CPU / 16 / BAUD) - 1)


#include <avr/io.h>
#include <util/delay.h>
#include <util/setbaud.h>	


void SerialWrite(unsigned long Data) {
	while(!(UCSRA & (1 << UDRE)));
	UDR = Data;
}

int main(void) {
	
	UBRRH = (BAUD_PRESCALE >> 8);
	UBRRL = BAUD_PRESCALE;
	
	//UCSRA |= (1 << U2X);
	UCSRB |= (1 << TXEN); //| (1 << RXEN);
	UCSRC |= (1 << UCSZ1) | (1 << UCSZ0);
	//UCSRC = (3<<UCSZ0);  
	
	while(1) {
		
		while(!(UCSRA & (1 << RXC))) {
			SerialWrite('Hello');
			_delay_ms(100);			
		}
	}
	return 0;
}