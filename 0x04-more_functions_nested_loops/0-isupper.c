#include "main.h"

/**
 * _isupper - function to check for uppercas char
 *
 * description: check uppercase character
 *
 * @c: input
 *
 * Return: 1 if c is uppercase & 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65)
	{
		_putchar(c);
		return (1);
	}
	else if (c <= 90)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
}
