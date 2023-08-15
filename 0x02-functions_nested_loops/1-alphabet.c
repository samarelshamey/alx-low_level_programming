#include "main.h"

/**
 * print_alphabet - function used to print alphabet in lowercase
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
