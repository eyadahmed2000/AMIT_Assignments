/*
 * BIT_Math.h
 *
 * Created: 4/8/2020 12:00:44 PM
 *  Author: M4800
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(var,BIT)	var|=(1<<BIT)
#define CLR_BIT(var,BIT)	var &=~(1<<BIT)
#define GET_BIT(var,BIT)	((var>>BIT)&1)
#define TOGGLE_BIT(var,BIT) var^=(1<<BIT)



#endif /* BIT_MATH_H_ */