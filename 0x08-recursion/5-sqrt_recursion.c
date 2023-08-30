#include "main.h"

/**
 * _sqrt_recursion - function returns the natural square root of a number
 *
 * @n: number
 *
 * Return: intger
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (help(n, n / 2));
}

/**
 * help - helper to function sqrt
 *
 * @n: number
 *
 * @value: number
 *
 * Return: intgere
*/

int help(int n, int value)
{
	if (value * value == n)
	{
		return (value);
	}
	if (value * value > n)
	{
		return (help(n, value - 1));
	}
	return (help(n, value + 1));
}
