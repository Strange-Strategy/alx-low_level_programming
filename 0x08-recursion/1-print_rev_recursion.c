#include "main.h"
/**
 * _print_rev_recursion - function to print the revere of a string
 * @*s: pointer to a string
 * @s: string
 * Return: revered string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
