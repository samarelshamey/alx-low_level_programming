#include "main.h"

/**
 * rev_string - function reverse the string
 *
 * @s: string
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
}
