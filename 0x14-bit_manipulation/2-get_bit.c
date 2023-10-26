#include <stdio.h>
#include "main.h"

/**
 * get_bit - functio returns the value of a bit at a given index
 *
 * @n: number
 *
 * @index: index
 *
 * Return: integer
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= sizeof(n) * 8)
		return (-1);
	i = 1 << index;
	return ((n & i) != 0);
}
