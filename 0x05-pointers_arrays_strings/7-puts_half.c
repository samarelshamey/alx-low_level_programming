#include "main.h"

/**
 * puts_half - function to print half string
 *
 * @str: string
 *
 * Return: nothing
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
