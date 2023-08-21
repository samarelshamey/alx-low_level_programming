#include "main.h"

/**
 * puts2 - function to print every other character of string
 *
 * @str: string
 *
 * Return: nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
