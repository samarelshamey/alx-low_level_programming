#include <stdio.h>
#include <math.h>

/**
 * is_prime - function
 *
 * @n: number
 *
 * Return: 0 (success)
*/

int is_prime(long long n)
{
	long long int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

/**
 * largest_prime_factor - function
 *
 * @n: number
 *
 * Return: largest_factor
*/

long long largest_prime_factor(long long n)
{
	long long int i;
	long long largest_factor = -1;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (is_prime(i))
			{
				largest_factor = i;
			}
			if (is_prime(n / i))
			{
				largest_factor = n / i;
			}
		}
	}
	return (largest_factor);
}
/**
 * main - entry point
 *
 * Return: 0 (success)
*/

int main(void)
{
	long long number = 612852475143;
	long long largest_factor = largest_prime_factor(number);

	printf("%lld\n", largest_factor);
	return (0);
}
