#include "main.h"

/**
 * _strncat - function to concatenate strings
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * @n: bytes
 *
 * Return: array
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
