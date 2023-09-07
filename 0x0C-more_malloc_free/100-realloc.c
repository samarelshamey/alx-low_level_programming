#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function reallocates a memory block
 *
 * @ptr: pointer
 *
 * @old_size: size
 *
 * @new_size: size
 *
 * Return: nothing
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	min_size = old_size < new_size ? old_size : new_size;
	memcpy(new_ptr, ptr, min_size);
	free(ptr);

	return (new_ptr);
}
