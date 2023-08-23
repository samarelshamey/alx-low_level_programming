#include <stdio.h>

/**
 * _strncat - function to concatenate
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * @n: bytes
 *
 * Return: array
 *
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
