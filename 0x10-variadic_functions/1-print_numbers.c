#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints the numbers given as parameters
 * @n: number of parameters
 * @seperator: pointer to a string to use
 * Return: 0 Always
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, const unsigned int);

		printf("%d", x);

		if ((i != (n - 1)) && (seperator != NULL))
		{
			printf("%s", seperator);
		}
	}

	printf("\n");

	va_end(args);
}
