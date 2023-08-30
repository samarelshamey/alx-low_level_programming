#include "main.h"

/**
 * is_prime_number - check if integer is prime number
 *
 * @n: number
 *
 * Return: intger
*/

int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - function to check prime
 *
 * @n: number
 *
 * @div: number
 *
 * Return: intger
*/

int check(int n, int div)
{
	if (div >= n && n > 1)
		return (1);
	else if (n % div == 0 || n <= 1)
		return (0);
	else
		return (check(n, div + 1));
}
