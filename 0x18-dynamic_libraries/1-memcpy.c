#include "main.h"

/**
 * _memcpy - function copy n character from src to dest
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * @n: number
 *
 * Return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		int temp;

		temp = dest[i];
		dest[i] = src[i];
		src[i] = temp;
	}
	return (dest);
}
