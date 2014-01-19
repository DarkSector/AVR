#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <avr/io.h>

void adc_init(void) {
	// Set reference to AVCC with 
	// cap on AREF and GND
	ADMUX = (1 << REFS0) | (1 << ADLAR);
	// enable the ADC
	ADCSRA = (1 << ADEN);
	// set prescalar to 64
	// F_CPU is 8000000UL
	// 8000000/64 = 125 KHz
	ADCSRA |= (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);

}

void adc_channel_select_4(void) {
	// ADC channel selection 
	// ADC4 0100
	ADMUX |=  (1 << MUX2);
	// disable PC4
	DIDR0 |= (1 << ADC4D);
}

void adc_start(void) {
	//start adc
	ADCSRA |= (1 << ADSC);
}

void adc_end(void) {
	// stop adc
	ADCSRA |= (0 << ADSC);
}