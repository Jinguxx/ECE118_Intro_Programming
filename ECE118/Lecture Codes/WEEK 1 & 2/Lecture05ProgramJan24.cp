#include "library.h"

int factorial_calculator(int x)
{
	if(x>1) 
		return x * factorial_calculator(x-1);
	else return x;
	
}


int exponent_calculator(int x, int y)
{
	if(y>1) 
		return x * exponent_calculator(x,y-1);
	else return x;
	
}

int own_exponent_calculator(int x)
{
	return exponent_calculator(x,x);
}


//This is a recursive function
//to calculate power.
//input 2 integers x and y
//output will be x to the power of y
int exponent_calculator_withPrintStatements(int x, int y)
{
	new_line();
	if(y==1)
	{
		print("This is the exit condition  !!!");
		new_line();
		return x;
	}
	else 
		{
			print("Calling recursive function for ");
			print(x);
			print(" to the power of ");
			print(y-1);
			return x * exponent_calculator(x,y-1);
		}
}

void main()
{
	print(factorial_calculator(5));
}