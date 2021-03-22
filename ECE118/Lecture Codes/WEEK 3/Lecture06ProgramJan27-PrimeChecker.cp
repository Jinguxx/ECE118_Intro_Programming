#include "library.h"

void recursive_prime_checker(int n, int divisor)
{
	if(divisor == 1)
	{
		print(n); print(" is a Prime Number");new_line();
	}
	else if(n%divisor == 0)
	{
		//print(n); print(" is not a prime number");
	}
	else 
	{
		//print(" Calling Recursively n = "); 
		//print(n); print(", divisor = ");
		//print(divisor);
		//new_line();
		recursive_prime_checker(n,divisor-1);   // We keep calling this recursively
	}
}

void check_if_prime(int n)
{ 
	 // % is modulus operator which 
	 //gives the reminder of a division operation
	if(n<1)
	{
		print("Invalid input");
	}
	else if(n==2)
	{
		print("2 is a Prime Number"); new_line();
	}
	else if(n%2 == 0) // a double = sign indicates comparison
	{
		//print(n); print(" is not prime number");

	}else if( n%2 != 0)  // ! means not , so != means not equal to.
	{
		recursive_prime_checker( n, (n+1)/2);
	}


}

//This program will print all the prime numbers until x.
void print_primes(int x)
{
	
	if(x > 10000)
	{
		print(" Max limit is 10000");
	}
	else if(x > 1)
	{
		print_primes(x-1); 
		check_if_prime(x);
		
	}
}





void main()
{
	print_primes(125);
}