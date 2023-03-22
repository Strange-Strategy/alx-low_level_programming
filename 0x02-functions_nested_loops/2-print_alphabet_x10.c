#include "main.h"
/**
 * print_alphabet_x10 - print alphabets
 *
 * return: always 0
 */
void print_alphabet_x10(void)
{
	char i;
	int j;
	
	for (j = 1; j <= 10; i++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
			_putchar('\n');
		}
	}
}
