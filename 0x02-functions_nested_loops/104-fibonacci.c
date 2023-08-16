#include "main.h"

/**
 * numLength - return the lenght of the string
 *
 * @n: operand number
 *
 * Return: number of digits
*/
int numLength(int n)
{
	int length = 0;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		length += 1;
	}
	return (length);
}
/**
 * main - entry point
 *
 * description : prints the firs 98 fibonacci numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int count, initia10s;
	unsigned long x = 1, y = 2, sum, max = 100000000, xo = 0, yo = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (xo > 0)
			printf("%lu", xo);
		initia10s = numLength(max) - 1 - numLength(x);
		while (xo > 0 && initia10s > 0)
		{
			printf("%d", 0);
			initia10s--;
		}
		printf("%lu", x);
		sum = (x + y) % max;
		sumo = xo + yo + (x + y) / max;
		x = y;
		xo = yo;
		y = sum;
		yo = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
