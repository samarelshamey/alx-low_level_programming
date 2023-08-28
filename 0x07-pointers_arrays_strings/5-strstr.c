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
	int i;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*haystack == needle[i])
			{
				return (needle);
			}
		}
		haystack++;
	}
	return (NULL);
}
