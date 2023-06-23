#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters of a function
 * @n: num of parameters
 * Return: addition of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int add = 0;

	unsigned int i;

	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, const unsigned int);

		add = (add + x);
	}

	va_end(args);

	return (add);
}
