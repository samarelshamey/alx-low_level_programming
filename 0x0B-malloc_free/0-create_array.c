#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create array
 *
 * @size: size of array
 *
 * @c: array
 *
 * Return: char
*/

char *create_array(unsigned int size, char c)
{
       	unsigned int i;
	char *ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
