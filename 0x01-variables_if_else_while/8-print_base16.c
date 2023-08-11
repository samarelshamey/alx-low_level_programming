#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all numbers hexadecimal
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 48; /* 0 equal 48 of base 16*/

	while (digit <= 102)
	{
		putchar (digit);
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar ('\n');
	return (0);
}
