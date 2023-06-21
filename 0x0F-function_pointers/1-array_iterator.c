#include <stdio.h>
/**
 * array_iterator - iterate through an array and executes a function
 * @size: size of array
 * @array: array to iterate through
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}
