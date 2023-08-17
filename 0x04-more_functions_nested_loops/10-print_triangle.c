#include "main.h"

/**
 * print_triangle - function to print triangle
 *
 * @size: input
*/

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if ((a + b) <= size)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}


