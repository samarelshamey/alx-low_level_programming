#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string s
 *
 * @s: pointer
 *
 * @accept: pointer
 *
 * Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
