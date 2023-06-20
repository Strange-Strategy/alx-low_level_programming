#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a strucy dog
 * @s: struct to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: %s\n", "(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age)
	{
		printf("Age: %.6f\n", d->age);
	}
	else
	{
		printf("Age: %s\n", "(nil)");
	}

	if (d->owner == NULL)
	{
		printf("Owner: %s\n", "(nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
