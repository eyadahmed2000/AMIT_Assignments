/*
 * KEYPAD_PROJECT.c
 *
 * Created: 4/28/2020 10:26:13 PM
 * Author : M4800
 */ 
#define F_CPU 16000000
#include "Keypad.h"
#include <util/delay.h>
unsigned char key;

int main(void)
{	DDRB&=~0xf0;
	DDRD&=~0xf0;
	DDRB|=(1<<0);
	PORTD|=0xF0;
	PORTB|=0xF0;
    
    while (1) 
    {	key=key_pressed();
		if (key=='7')
		{PORTB|=(1<<0);
		_delay_ms(10000);
		}
    }
}

