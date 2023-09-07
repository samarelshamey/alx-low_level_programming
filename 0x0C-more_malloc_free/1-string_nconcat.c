#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - fucntion to concatenates two strings.
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: number of bytes
 *
 * Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, concat_len;
	char *res;

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
	concat_len = len1 + (n >= len2 ? len2 : n);
	res = malloc(concat_len + 1);
	if (res == NULL)
	{
		return (NULL);
	}
	strncpy(res, s1, len1);
	strncpy(res + len1, s2, concat_len - len1);
	res[concat_len] = '\0';

	return (res);
}
