#include "main.h"

/**
 * print_line - function to print line
 *
 * @n: number
*/

void print_line(int n)
{
	int length;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (length = 1; length <= n; length++)
			_putchar('_');
	}
	_putchar('\n');
}
