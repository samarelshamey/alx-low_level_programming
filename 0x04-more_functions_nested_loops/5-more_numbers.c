#include "main.h"

/**
 * more_numbers - function to print 10 time the numbers
*/

void more_numbers(void)
{
	int a;
	int row;

	for (a = 0; a <= 14; a++)
	{
		for (row = 0; row <= 9; row++)
		{
			_putchar(a + 48);
		}
	}
	_putchar('\n');
}
