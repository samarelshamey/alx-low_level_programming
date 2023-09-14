#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct token - struct
 *
 * @token: format
 *
 * @f: the function
*/
typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void charformat(char *sep, va_list ptr);
void intformat(char *sep, va_list ptr);
void floatformat(char *sep, va_list ptr);
void stringformat(char *sep, va_list ptr);
#endif
