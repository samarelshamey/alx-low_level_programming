#include "main.h"

/**
 * flip_bits - returns the number of bits 
 *
 * @n: number
 *
 * @m: second number
 *
 * Return: integer
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		if (x & 1ul)
			count++;
		x = x >> 1;
	}
	return (count);
}
