#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * charformat - format char
 *
 * @sep: string separator
 *
 * @ptr: pointer
*/
void charformat(char *sep, va_list ptr)
{
	printf("%s%c", sep, va_arg(ptr, int));
}
/**
 * intformat - format int
 *
 * @sep: string separator
 *
 * @ptr: pointer
*/
void intformat(char *sep, va_list ptr)
{
	printf("%s%d", sep, va_arg(ptr, int));
}
/**
 * floatformat - format float
 *
 * @sep: string
 *
 * @ptr: pointer
*/
void floatformat(char *sep, va_list ptr)
{
	printf("%s%f", sep, va_arg(ptr, double));
}
/**
 * stringformat - format string
 *
 * @sep: string separator
 *
 * @ptr: pointer
*/
void stringformat(char *sep, va_list ptr)
{
	char *s = va_arg(ptr, char *);

	switch ((int)(!s))
		case 1:
			s = "(nil)";
	printf("%s%s", sep, s);
}
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
	int i = 0, j;
	char *sep = "";
	token_t tokens[] = {
		{"c", charformat},
		{"i", intformat},
		{"f", floatformat},
		{"s", stringformat},
		{NULL, NULL}
	};

	va_start(nptr, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(sep, nptr);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(nptr);
	printf("\n");
}
