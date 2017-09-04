//============================================================================
// Name        : 2_EnumDemo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
//enum demo
const int red 	= 1;
const int green = 2;
const int blue 	= 3;

//var of type color can only be one of 3 values
enum color{ RED=1,GREEN,BLUE };

int main() {
	//suppose you want a var to be either
	//red, green or blue

	//THE WRONG WAY
	int myColor = red;	//So far so good
	myColor 	= 5;	//BOOM!  what color is 5?
						//what will your program do?
						//Very difficult to debug in a
						//large program
						//Be nice if compiler caught this
	//THE RIGHT WAY
	color myEnumColor;
	myEnumColor = BLUE;

	//myEnumColor cannot be equal to
	//anything but RED,GREEN,BLUE
	//following generates an invalid conversion from enum to int error
	//this is how compiler catches erroneous values
//	myEnumColor = 19%10;
}

void demoConstants() {
	//constants
	const int MYINT = 3;	//dandy
//	MYINT = 2;				//cannot modify
//	MYINT++;				//"
	const int myint2=5;		//must initialize when created
//	myint2 = 5;				//cannot modify

}
