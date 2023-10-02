#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: string
 *
 * Return: integer
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
