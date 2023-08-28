#include "main.h"

/**
 * _memset - function copy the char to the first n of str pointed to
 *
 * @s: string
 *
 * @b: character
 *
 * @n : number
 *
 * Return: char
 *
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
