#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: char
*/

char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *dupl = (char *)malloc((len + 1) * sizeof(char));
	
	if (str == NULL)
	{
		return (NULL);
	}

	if (dupl == NULL)
	{
		return (NULL);
	}
	strcpy(dupl, str);
	return (dupl);
}
