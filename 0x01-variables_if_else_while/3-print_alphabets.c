#include <stdio.h>
/**
 * main - Entry
 * program to print alphabets in lower and upper case
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

	for (i = 65; i <= 90; i++)
	{
		putchar((char) i);
	}
	putchar((char)'\n');
	return (0);
}
