#include "main.h"

/**
 * more_numbers - function to print 10 time the numbers
*/

void more_numbers(void)
{
	int n;
	int count;
	int row;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			n = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				n = count % 10;
			}
			_putchar(n + 48);
		}
	_putchar('\n');
	}
}
