#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function  allocates memory for an array
 *
 * @nmemb: elements of array
 *
 * @size: size of array
 *
 * Return: nothing
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = calloc(nmemb, size);
	return (ptr);
}
