#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 *
 * @b: integer
 *
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
