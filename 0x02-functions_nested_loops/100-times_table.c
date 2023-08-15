#include "main.h"
/**
 * print_times_table - function to print the n times table
 *
 * @n: input
*/

void print_times_table(int n)
{
	int i, multi, result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
		for (multi = 1; multi <= n; multi++)
		{
			_putchar(',');
			_putchar(' ');
			result = i * multi;
			if (result <= 9)
				_putchar(' ');
			if (result <= 99)
				_putchar(' ');
			if (result >= 100)
			{
				_putchar((result / 100) + 48);
				_putchar((result / 10) % 10 + 48);
			}
			else if (result <= 99 && result >= 10)
				_putchar((result / 10) + 48);
			_putchar((result % 10) + 48);
		}
		_putchar('\n');
		}
	}
}
