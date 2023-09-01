#include "main.h"

/**
 * _strlen - function return length of string
 *
 * @s: string
 *
 * Return: int
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	return (i);
}
