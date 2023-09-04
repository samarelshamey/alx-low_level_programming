#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: char
*/
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}
