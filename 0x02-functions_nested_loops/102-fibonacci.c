#include <stdio.h>
/**
 * main - etry point
 *
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
*/

int main(void)
{
	unsigned long x = 0, y = 1, sum;
	float total;

	while (1)
	{
		sum = x + y;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total += sum;
		x = y;
		y = sum;
	}
	printf("%.0f\n", total);

	return (0);
}
