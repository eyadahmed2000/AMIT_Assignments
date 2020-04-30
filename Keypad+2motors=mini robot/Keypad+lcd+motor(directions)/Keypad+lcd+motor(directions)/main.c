/*
 * Keypad+lcd+motor(directions).c
 *
 * Created: 4/30/2020 11:48:35 PM
 * Author : Eyad
 */ 

#include <avr/io.h>
#include "lcd.h"
#include "Keypad.h"
unsigned char key;
int main(void)
{DDRD|=0x0f;
 DDRD&=~0xf0;
 DDRC|=0x7f;
 PORTD|=0xff;
 LCD_Init();
    while (1) 
    {	
		key=key_pressed();
		if (key=='8')
		{	PORTC|=0x2d;
			PORTC&=~0x12;
			LCD_Command(0x80);
			LCD_String("Forward                   ");
			LCD_Command(0xc0);
			LCD_String("                      ");
		}
		if (key=='2')
		{PORTC|=0x1e;
		PORTC&=~0x21;
		LCD_Command(0x80);
		LCD_String("Backward                 ");
		LCD_Command(0xc0);
		LCD_String("                      ");
		}
		if (key=='4')
		{PORTC|=0x05;
		PORTC&=~0xfa;
		
		LCD_Command(0x80);
		LCD_String("Left                       ");
		LCD_Command(0xc0);
		LCD_String("                      ");
		}
		if (key=='6')
		{PORTC|=0x28;
		PORTC&=~0xd7;
		
		LCD_Command(0x80);
		LCD_String("Right                 ");
		LCD_Command(0xc0);
		LCD_String("                      ");
		}
		if (key=='a')
		{PORTC&=~0xff;
		LCD_Command(0x80);
		LCD_String("8->Front 2->Back");
		LCD_Command(0xc0);
		LCD_String("4-right 6-left");
			
		}
    }
}

