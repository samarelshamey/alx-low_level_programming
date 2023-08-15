#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the sum of all the multiples of 3 or 5
 *
 * Return: 0 (success)
*/

int main(void)
{
	int sum, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
