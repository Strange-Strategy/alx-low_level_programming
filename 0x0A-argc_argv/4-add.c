#include <stdio.h>
#include "main.h"
/**
 * main - adds the arguments passed
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int sum = 0;
	int i = 0;

	if (argc > 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d", sum);
	}

	return (0);
}
