#ifndef F_CPU
#define F_CPU 8000000UL
#endif 

#include <avr/io.h>
#include <util/delay.h>

void delay_ms(unsigned int delaytime){
	int i = 0;
	for(i=0; i<=delaytime; i++){
		_delay_ms(1);
	}
}