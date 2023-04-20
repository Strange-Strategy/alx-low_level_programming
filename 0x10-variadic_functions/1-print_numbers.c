#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers given as  parameters
 * @n: nuber of parameters
 * @separator: pointer to a string to use
 * Return: 0 Always
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, const unsigned int);

		printf("%d", x);

		if ((i != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
