#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function to concatenate arguments
 *
 * @ac: argument
 *
 * @av: argument
 *
 * Return: char
*/

char *argstostr(int ac, char **av)
{
	int i;
	int len = 0;
	int arg_len = 0;
	char *result;
	int index = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	result = malloc(len * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		arg_len = 0;
		arg_len += strlen(av[i]);
		strncpy(result + index, av[i], arg_len);
		index += arg_len;
		result[index++] = '\n';
	}
	result[len - 1] = '\0';
	return (result);
}
