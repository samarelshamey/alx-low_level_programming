#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function prints anything
 *
 * @format: pointer
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list nptr;
	const char *fmt;
	char c, *s;
	float f;
	int i, count = 0;

	va_start(nptr, format);
	while (*fmt)
	{
		if (count > 0)
			printf(", ");
		else if (*fmt == 'c')
		{
			c = va_arg(nptr, int);
			printf("%c", c);
			count++;
		}
		else if (*fmt == 'i')
		{
			i = va_arg(nptr, int);
			printf("%d", i);
			count++;
		}
		else if (*fmt == 'f')
		{
			f = (float)va_arg(nptr, double);
			printf("%f", f);
			count++;
		}
		else if (*fmt == 's')
		{
			s = va_arg(nptr, char *);
			if (s == NULL)
				printf("nil");
			else
				printf("%s", s);
			count++;
		}
		fmt++;
	}
	va_end(nptr);
	printf("\n");
}
