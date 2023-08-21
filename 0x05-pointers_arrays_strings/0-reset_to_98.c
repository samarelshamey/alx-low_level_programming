#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n = 402;
	int *ptr;

	ptr = &n;

	printf("value of n is %d", n);
	*ptr = 98;
	printf("updated value of n is %d", *ptr);
	return (0);
}
