#include "function_pointers.h"

/**
 * array_iterator - function that executes another function
 *
 * @array: array of numbers
 *
 * @size: array size
 *
 * @action: pointer to function
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (array && action)
			action(array[i]);
	}
}
