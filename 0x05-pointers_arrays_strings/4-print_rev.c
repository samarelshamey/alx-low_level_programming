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
	while (*s != '\0')		
	{
		_putchar(*s + 0);
		s--;
	}
	_putchar('\n');
}
