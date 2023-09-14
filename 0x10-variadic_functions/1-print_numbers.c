#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function to print numbers
 *
 * @separator: string to be printed between numbers
 *
 * @n: numbers
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nptr;

	va_start(nptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nptr, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nptr);
}
