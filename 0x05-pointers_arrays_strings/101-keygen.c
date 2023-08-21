#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
*/

int main(void)
{
	int sum;
	char s;

	srand(time(NULL));
	while (sum <= 2645)
	{
		s = rand() % 120;
		sum += s;
		putchar(s);
	}
	putchar(2772 - sum);
	return (0);
}
