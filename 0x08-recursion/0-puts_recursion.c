#include "main.h"
/**
 * _puts_recursion - function return
 * @*s: pointer to a char string
 * @s: string
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_putchar('\n');
	}
	_puts_recursion(s);
}
