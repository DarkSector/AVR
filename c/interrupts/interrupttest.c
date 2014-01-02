#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int flag = 0xff;
void delay_ms(unsigned int ms){
	int i=0;
	for (i=0; i<=ms; i++){
		_delay_ms(1);
	}
}

void led_blink(unsigned int _time){
	PORTB = (1 << PORTB4);
	delay_ms(_time);
	PORTB = (0 << PORTB4);
	delay_ms(_time);

}

ISR(INT1_vect){
	flag = ~flag;
}


int main(void){
	
	// The port b.4 is output
	DDRB = (1 << DDB4);
	// Set the global interrupt bit
	sei();
	
	// Set INT0 as high
	GIMSK = (1 << INT1);
	MCUCR = ()
	while(1){
		if (flag == 0xff){
			led_blink(1000);
		}
		else{
			led_blink(100);
		}
		
	}
	return 0;
}
