#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings passed as parameters
 * @separator: separates strings
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if ((i != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
