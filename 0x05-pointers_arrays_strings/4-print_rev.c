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
	int n;

	while (s[i] != '\0')
		i++;

	n = i - 1;
	for (i = n; s[i] != '\0'; i--)
		_putchar(s[i]);

	_putchar('\n');
}
