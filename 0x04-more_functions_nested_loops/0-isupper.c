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
		return (1);
	if (c <= 90)
		return (1);
	else
		return (0);
}
