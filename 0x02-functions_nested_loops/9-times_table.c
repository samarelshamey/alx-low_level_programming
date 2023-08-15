#include "main.h"

/**
 * times_table - function used to print  the 9 times table
*/

void times_table(void)
{
	int i, multi, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
			result = i * multi;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + 48);
			_putchar((result % 10) + 48);
		}
		_putchar('\n');
	}
}
