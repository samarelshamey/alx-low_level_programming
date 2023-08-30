#include "main.h"

/**
 * factorial - function returns the factorial of a given number
 *
 * @n: number
 *
 * Return: integer
*/

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
