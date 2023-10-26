#include "main.h"

/**
 * get_endianness - function to check the endianness
 *
 * Return: integer
*/

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *) &n);
}
