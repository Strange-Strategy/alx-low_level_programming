#include <stdio.h>
/**
 * print_name - function to print a name
 * @f: pointer a function that retuns void and takes in a char
 * @name: name to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
