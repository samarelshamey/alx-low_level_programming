#include "main.h"

/**
 * print_alphabet_x10 - function used to print alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int row, ch;

	for (row = 0; row <= 9; row++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
