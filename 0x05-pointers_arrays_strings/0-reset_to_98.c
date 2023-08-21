#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n = 402;
	int *ptr = &n;

	_putchar(n);
	*ptr = 98;
	_putchar(n);
	return (0);
}
