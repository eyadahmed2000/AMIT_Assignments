/*
 * KEYPAD+LCD.c
 *
 * Created: 4/30/2020 4:15:08 PM
 * Author : EYAD
 */ 
 #define F_CPU 16000000
 #include "Keypad.h"
 #include "lcd.h"
 #include <util/delay.h>
 unsigned char key;

int main(void)
{	DDRD|=0x0f;
	DDRD&=~0xf0;
	DDRB|=(1<<0);
	PORTD|=0xF0;
	PORTD|=0x0F;
	LCD_Init();
    while (1) 
    {	key=key_pressed();
		LCD_Command(0x80);
		LCD_Char(key);
		
    }
}

