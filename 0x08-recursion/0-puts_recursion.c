#include "main.h"

/**
 * _puts_recursion - function to print string
 *
 * @s: pointer to string
 *
 * Return: nothing
*/

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		_putchar(*s);
		s++;
	}
}
