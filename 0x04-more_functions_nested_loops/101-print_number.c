#include "main.h"

/**
 * print_number - function
 *
 * @n: number
 *
*/

void print_number(int n)
{
	unsigned int intger = n;

	if (intger < 0)
	{
		_putchar('-');
		intger = -intger;
	}
	if ((intger / 10) > 0)
	{
		print_number(intger / 10);
	}
	_putchar((intger % 10) + 48);
}
