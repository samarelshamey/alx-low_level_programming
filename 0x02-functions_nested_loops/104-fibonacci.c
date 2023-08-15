#include <stdio.h>
/**
 * main - entry point
 *
 * print_fibonacci - function to print fibonacci sequence
 *
 * Return: 0 (success)
*/

void print_fibonacci(void)
{
	int a = 1;
	int b = 2;
	int c;

	printf("%d, %d", a, b);
	for (int i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");
}

int main(void)
{
	print_fibonacci();
	return (0);
}
