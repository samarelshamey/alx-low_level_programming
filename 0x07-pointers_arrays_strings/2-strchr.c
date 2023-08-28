#include "main.h"

/**
 * _strchr - function return the first occurrence of the char in str
 *
 * @s: string
 *
 * @c: character
 *
 * Return: char
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
