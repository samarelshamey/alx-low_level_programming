#include "main.h"

/**
 * print_rev - function to print string in reverse
 *
 * @s: string
 *
 * Return: nothing
 *
*/

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
