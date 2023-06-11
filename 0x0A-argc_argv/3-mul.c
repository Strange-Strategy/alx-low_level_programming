#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiplication of two numbers
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int n;
	int mul = 1;

	if ((argc > 3) || (argc < 3))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (n = 1; n < argc; n++)
		{
			mul *= atoi(argv[n]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
