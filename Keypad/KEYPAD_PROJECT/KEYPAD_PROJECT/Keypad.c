/*
 * Keypad.c
 *
 * Created: 4/28/2020 10:26:59 PM
 *  Author: Eyad ahmed
 */ 
 #include "Keypad.h"
 unsigned char x[16]={'7','8','9','/','4','5','6','*','1','2','3','-','C','0','=','+'};
 unsigned char col,row,keypress,row_cou;
 unsigned int key_pressed()
 {	for (row=0;row<NUM_row;row++) //loop to set the (nth) row by zero
 {	PORTB|=0xf0;				//set all bits high
	CLR_BIT(PORTB,(4+row));		//set the bit(4+row)=0
	for (col=0;col<NUM_col;col++)
	{	if (GET_BIT(PIND,(4+col))==0)
		{	keypress=(row*NUM_col)+col;	
			return x[keypress];
		}// if statment curly braces
	}//2nd for loop curly braces
	
 }//1st for loop curly braces
 }// function curly braces
