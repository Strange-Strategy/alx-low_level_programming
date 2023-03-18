#include <stdio.h>
/**
 * main - Entry
 * program to print letters backwards
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar((char) i);
		i--;
	}
	putchar((char)'\n');
	return (0);
}
