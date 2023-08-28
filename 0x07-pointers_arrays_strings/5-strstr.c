#include "main.h"

/**
 * _strstr - function finds the first occurrence of string in another
 *
 * @haystack: pointer
 *
 * @needle: pointer
 *
 * Return: char
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*i != '\0' && *i == *j)
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
