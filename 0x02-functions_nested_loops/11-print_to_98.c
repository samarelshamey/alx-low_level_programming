#include "main.h"

/**
 * print_to_98 - function to print num from n to 98 followed by new line
 *
 * @n : input
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98; i--)
	{
			printf("%d, ", i);
	}
	else
		for (i = n; i < 98; i++)
	{
		printf("%d, ", i);
	}
	printf("98\n");
}
