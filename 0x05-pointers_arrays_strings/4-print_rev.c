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

	for (i = 0; *s != '\0'; *s--)
	{
		_putchar(*s);
		i++;
	}
	_putchar('\n');
}
