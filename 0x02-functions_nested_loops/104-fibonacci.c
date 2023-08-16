#include <stdio.h>
/**
 * print_fibonacci - function to print fibonacci sequence
 *
 * Return: 0 (success)
*/
void print_fibonacci(void)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int c;
	unsigned int i;

	printf("%d, %d", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");
}
/**
 * main - entry point
 *
 * Description: print sequence
 *
 * Return 0 (succes)
*/

int main(void)
{
	print_fibonacci();
	return (0);
}
