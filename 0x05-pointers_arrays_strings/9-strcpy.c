#include "main.h"

/**
 * *_strcpy - function copy string to another
 *
 * @dest: string1
 *
 * @src: string2
 *
 * Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
