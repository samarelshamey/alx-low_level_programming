#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: pointer
 *
 * @size: square size
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i;
	int l_sum = 0, r_sum = 0;

	for (i = 0; i < size; i++)
	{
		l_sum += *(a + i * size + i);

		r_sum += *(a + i * size + (size - 1 - i));
	}
	printf("%d, ", l_sum);
	printf("%d\n", r_sum);
}
