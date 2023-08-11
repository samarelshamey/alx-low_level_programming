#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: combination of 3 numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int dig1 = 0;
	int dig2, dig3;

	while (dig1 <= 9)
	{
		dig2 = 0;
		while (dig1 <= 9)
		{
			dig3 = 0;
			while (dig3 <= 9)
			{
				if (dig1 != dig2 &&
					dig1 < dig2 &&
					dig2 != dig3 &&
					dig2 < dig3)
				{
					putchar(dig1 + 48);
					putchar(dig2 + 48);
					putchar(dig3 + 48);
					if (dig1 + dig2 + dig3 != 24)
					{
						putchar (',');
						putchar (' ');
					}
				}
		dig3++;
			}
	dig2++;
		}
	dig1++;
	}
	putchar ('\n');
	return (0);
}
