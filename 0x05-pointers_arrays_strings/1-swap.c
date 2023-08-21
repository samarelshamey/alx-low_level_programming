#include "main.h"

/**
 * swap_int - swaping two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: 0 (success)
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*b = *a;
	*a = temp;
}
