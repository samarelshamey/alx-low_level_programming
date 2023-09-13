#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - function selects the correct function to perform the operation
 *
 * @s: perator passed as argument to the program
 *
 * Return: integer
*/

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

    while (ops != NULL)
    {
	    if (strcmp(ops[i].op, s) == 0)
	    {
		    return (ops[i].f);
	    }
	    i++;
    }
    return (NULL);
}
