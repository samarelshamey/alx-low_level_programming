#include "main.h"

/**
 * string_toupper - fnction to print string in uppercase
 *
 * @s: string
 *
 * Return: char
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}
	return (s);
}
