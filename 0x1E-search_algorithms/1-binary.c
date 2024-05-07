#include "search_algos.h"
/**
 * binary_search - func search for value in array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: integer
*/
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid, i;

	if (array == NULL)
	{
		return (-1);
	}
	while (r > l)
	{
		mid = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
