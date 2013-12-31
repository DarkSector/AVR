#define F_CPU 8000000UL /*Using the internal clock with 8 prescalar*/
#define BAUD 9600UL
#define BAUD_PRESCALE ((F_CPU / 16 / BAUD) - 1)

#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include <util/setbaud.h>	

void usart_send(unsigned char DataPacket);
char String[] = {"Hello"};

void SerialWrite(char s[]){
	int i = 0;
	while(s[i] != 0x00){
		usart_send(s[i]);
		i++;		
	}
	if (s[i] == 0x00){
		// if it's the last element
		// send \n
		usart_send('\n');
	}
}

void usart_send(unsigned char DataPacket){
	while(!(UCSRA & (1 << UDRE)));
	UDR = DataPacket;
}

int main(void){
	
	UBRRH = (BAUD_PRESCALE >> 8);
	UBRRL = BAUD_PRESCALE;
	
	UCSRA |= (1 << U2X);  //Baud to be used: 19200 on the client side
	UCSRB |= (1 << TXEN); //| (1 << RXEN);
	UCSRC |= (1 << UCSZ1) | (1 << UCSZ0);

	
	while(1){
		if(!(UCSRA & (1 << RXC))) {		
			SerialWrite(String);
		}
	
	}
	
	return 0;
}