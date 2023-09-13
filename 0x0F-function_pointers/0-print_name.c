#include "function_pointers.h"

/**
 * print_name - function to print name
 *
 * @name: pointer to char array
 *
 * @f: pointer to a function
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
