#include "main.h"

/**
 * print_diagonal - function to drwa line
 *
 * @n: is the number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int length, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (length = 1; length <= n; length++)
		{
			for (space = 1; space < length; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
