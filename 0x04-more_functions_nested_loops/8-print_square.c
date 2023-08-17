#include "main.h"

/**
 * print_square - function
 *
 * @size: square size
*/

void print_square(int size)
{
	int length;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (length = 1; length <= size; length++)
		_putchar('#');
	_putchar('\n');	
	}
}
