#include "main.h"

/**
 * set_bit - sets the value of a bit
 *
 * @n: pointer to number
 *
 * @index: index
 *
 * Return: integer
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
