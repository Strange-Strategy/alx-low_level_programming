#include <stdio.h>
#include "dog.h"
/**
 * print_dog- prints a struct dog
 * @d: strcut to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: %s", "(nil)");
	} else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age == '0')
	{
		printf("Age: %s", "(nil)");
	} else
	{
		printf("Age: %.6f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: %s", "(nil)");
	} else
	{
		printf("Owner: %s\n", d->owner);
	}
}
