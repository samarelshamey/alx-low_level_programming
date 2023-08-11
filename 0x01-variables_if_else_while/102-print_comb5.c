#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: combination of two digit
 *
 * Return: 0 (success)
*/
int main(void)
{
	int digit1 = 0, digit2;

	while (digit1 <= 99)
	{
		digit2 = digit1;
		while (digit2 <= 99)
		{
			if (digit2 != digit1)
			{
				putchar((digit1 / 10) + 48);
				putchar ((digit1 % 10) + 48);
				putchar(' ');
				putchar((digit2 / 10) + 48);
				putchar((digit2 % 10) + 48);

				if (digit1 != 98 || digit2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
