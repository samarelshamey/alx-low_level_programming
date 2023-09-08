#include "main.h"
#include <ctype.h>

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

	for (n1 = 0; !isdigit(s[n1]); n1++)
	{
		if (n1 == '-')
		{
			sign = -1;
		}
	}
	for (i = n1; isdigit(s[i]); i++)
	{
		res *= 10;
		res += (s[i] - 48);
	}
	return (sign * res);
}

/**
 * print_number - function to print number
 *
 * @num: number
 *
 * Return: nothing
*/
void print_number(int num)
{
	char s[20];
	int i;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	i = 0;
	do {
		s[i++] = num % 10 + '0';
		num /= 10;
	} while (num > 0);
	while (i > 0)
	{
		_putchar(s[--i]);
	}
	_putchar('\n');
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
		_putchar('\n');
		return (98);
	}
	num1_str = argv[1];
	num2_str = argv[2];
	for (i = 0; num1_str[i] != '\0'; i++)
	{
		if (!isdigit(num1_str[i]))
		{
			_puts("Error");
			_putchar('\n');
			return (98);
		}
	}
	for (i = 0; num2_str[i] != '\0'; i++)
	{
		if (!isdigit(num2_str[i]))
		{
			_puts("Error");
			_putchar('\n');
			return (98);
		}
	}
	num1 = _atoi(num1_str);
	num2 = _atoi(num2_str);
	mul = multiply(num1, num2);
	print_number(mul);
	return (0);
}
