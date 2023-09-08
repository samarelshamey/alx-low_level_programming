#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * multiply - function to multiple two numbers
 *
 * @n1: number1
 *
 * @n2: number2
 *
 * Return: intger
*/

int multiply(int n1, int n2)
{
	return (n1 * n2);
}
/**
 * _puts - function to print string
 *
 * @s: string
 *
 * Return: nothing
*/
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
}
/**
 * _atoi - function convert a string to intger
 *
 * @s: string
 *
 * Return: intger
*/
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int res = 0, n1, i;

	for (n1 = 0; !(s[n1] >= 48 && s[n1] <= 57); n1++)
	{
		if (n1 == '-')
		{
			sign = -1;
		}
	}
	for (i = n1; s[n1] >= 48 && s[n1] <= 57; i++)
	{
		res *= 10;
		res += (s[i] - 48);
	}
	return (sign * res);
}
/**
 * main - enrtry point
 *
 * @argc: count
 *
 * @argv: values
 *
 * Return: intger
*/

int main(int argc, char *argv[])
{
	int i, num1, num2, mul;
	char *num1_str, *num2_str;

	if (argc != 3)
	{
		_puts("Error");
		return (98);
	}
	_putchar('\n');
	num1_str = argv[1];
	num2_str = argv[2];
	for (i = 0; num1_str[i] != '\0'; i++)
	{
		if (!isdigit(num1_str[i]))
		{
			_puts("Error");
			return (98);
		}
		_putchar('\n');
	}
	for (i = 0; num2_str[i] != '\0'; i++)
	{
		if (!isdigit(num2_str[i]))
		{
			_puts("Error");
			return (98);
		}
		_putchar('\n');
	}
	num1 = _atoi(num1_str);
	num2 = _atoi(num2_str);
	mul = multiply(num1, num2);
	printf("%d\n", mul);
	return (0);
}
