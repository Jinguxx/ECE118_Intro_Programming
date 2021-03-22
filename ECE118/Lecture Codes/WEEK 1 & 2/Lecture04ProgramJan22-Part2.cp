#include "library.h"


int calculate_area_rectangle(int length, int breadth)
{
	return (length * breadth);
}

int calculate_area_triangle(int base, int height)
{
	return ((base * height)/2);
}

void main()
{
	print("We are now calculating the area of a rectangle");
	new_line();
	print("Area of rectangle of length = 5, breadth = 10 is :");
	print(calculate_area_rectangle(5,10));
}