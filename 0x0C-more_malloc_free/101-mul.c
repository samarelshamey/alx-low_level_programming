#include "main.h"
#include <ctype.h>
#include <stdlib.h>
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
	int res = 0;
	int sign = 1;
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + (s[i] - '0');
		}
		else
		{
			_puts("Error");
			_putchar('\n');
			exit(98);
		}
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
	int num1, num2, mul;

	if (argc != 3)
	{
		_puts("Error");
		_putchar('\n');
		exit(98);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mul = multiply(num1, num2);
	print_number(mul);
	return (0);
}
