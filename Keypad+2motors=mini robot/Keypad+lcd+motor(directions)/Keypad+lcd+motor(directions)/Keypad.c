/*
 * Keypad.c
 *
 * Created: 4/28/2020 10:26:59 PM
 *  Author: Eyad ahmed
 */ 
 #include "Keypad.h"
 unsigned char x[17]={'7','8','9','/','4','5','6','*','1','2','3','-','C','0','=','+','a'};
 unsigned char col,row,keypress,row_cou;
 unsigned int key_pressed()
 {	for (row=0;row<NUM_row;row++)		//loop to set the (nth) row by zero
 {	PORTD|=0x0f;						//set all bits high
	CLR_BIT(PORTD,(row));				//set the bit(4+row)=0
	for (col=0;col<NUM_col;col++)
	{	if (GET_BIT(PIND,(4+col))==0)
		{	keypress=(row*NUM_col)+col;	
			return x[keypress];
		}// if statment curly braces
	}//2nd for loop curly braces
	
 }//1st for loop curly braces
 return x[16];
 }// function curly braces
