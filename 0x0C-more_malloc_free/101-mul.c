#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * multiply - function to multiple two numbers
 *
 * @n1: number1
 *
 * @n2: number2
 *
 * Return: intger
*/

int multiply(int n1, int n2)
{
	return (n1 * n2);
}
/**
 * main - enrtry point
 *
 * @argc: count
 *
 * @argv: values
 *
 * Return: intger
*/

int main(int argc, char *argv[])
{
	int i, num1, num2, mul;
	char *num1_str, *num2_str;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1_str = argv[1];
	num2_str = argv[2];
	for (i = 0; num1_str[i] != '\0'; i++)
	{
		if (!isdigit(num1_str[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	for (i = 0; num2_str[i] != '\0'; i++)
	{
		if (!isdigit(num2_str[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	num1 = atoi(num1_str);
	num2 = atoi(num2_str);
	mul = multiply(num1, num2);
	printf("%d\n", mul);
	return (0);
}
