#include "main.h"
/*
 * main - recursion
 * @*s - argument
 * returns factorial
 */

int factorial(int n){
	if (n == 1) {
		return (1);
	} 
	else {
		return (n*factorial(n - 1));
				}
				}

