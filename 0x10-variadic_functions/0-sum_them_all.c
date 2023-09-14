#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function returns the sum of all its parameters
 *
 * @n: numbers
 *
 * Return: integer
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list nptr;
	unsigned int i, sum = 0;

	va_start(nptr, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(nptr, int);
	va_end(nptr);
	return (sum);
}
