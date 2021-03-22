#include "library.h"

//A recursive function to print the integers n until 0.
void print_sequence(int n)
{
	if(n>0)  //THis is the exit condition
	{
	 print(n);
	 new_line();
	 print_sequence(n-1); //The method calls it owns self with a different parameter.
	}
}



void main()
{
	//Objective to invoke a function that prints from  any number to 1.
	print_sequence(10);
}
