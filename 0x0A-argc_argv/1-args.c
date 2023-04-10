#include <stdio.h>
/**
 * main - prints number of argument passed
 * @argc: count of arguments
 * @argv: arguments passed
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv)
{
	int numofags = argc;

	printf("num of args = %d\n", numofags);
	return (0);
}
