#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @n: input
 *
 * Return: the value of the last digit
*/
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;
	_putchar(lastdigit);
	return (0);
}

