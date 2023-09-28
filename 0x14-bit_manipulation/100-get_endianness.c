#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: integer
*/

int get_endianness(void)
{
	unsigned long int num = 1;

	return (*(char *)&num);
}
