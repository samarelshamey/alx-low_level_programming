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
	int count;
	unsigned long x = 0, y = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = x + y;
			printf("%lu", sum);
		x = y;
		y = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
