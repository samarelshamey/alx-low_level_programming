#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 *
 * @separator: string
 *
 * @n: count
 *
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nptr;
	char *str;

	va_start(nptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(nptr, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("nil");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nptr);
}
