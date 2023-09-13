#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: array of numbers
 *
 * @size: array size
 *
 * @cmp: pointer to function
 *
 * Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
