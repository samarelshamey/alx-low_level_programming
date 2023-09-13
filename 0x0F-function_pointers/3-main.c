#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - entry point
 *
 * @argc: count
 *
 * @argv: arguments
 *
 * Return: integer
*/

int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	 num1 = atoi(argv[1]);
	 num2 = atoi(argv[3]);
	 operation = get_op_func(argv[2]);
	 if (operation == NULL)
	 {
		 printf("Error\n");
		 return (1);
	 }
	 res = operation(num1, num2);
	 printf("%d\n", res);
	 return (0);
}
