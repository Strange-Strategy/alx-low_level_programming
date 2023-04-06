#include "main.h"
/*
 * main - recursion
 * @*s - argument
 * returns factorial
 */

unsigned long long int factorial(unsigned int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
