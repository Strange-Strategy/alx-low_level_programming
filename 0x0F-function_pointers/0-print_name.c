#include <stdio.h>
/**
 * print_name - function to print a name
 * @f: pointer a function that returns void and takes in a char
 * @name: name to print
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

