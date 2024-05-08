#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: size of array
 * @value: value to be searched for
 * Return: integer
*/
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, i;
	size_t jump = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] < value)
		{
			low = i;
		}
		if (array[i] > value)
		{
			break;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, i);
	for (i = low; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
