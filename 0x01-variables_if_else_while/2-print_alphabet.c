#include <stdio.h>
/**
 * main - Entry point
 * program to print a-z
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar((char) i);
		i++;
	}
	putchar((char)'\n');
	return (0);
}
