#include "main.h"

/**
 * rot13 - function to encrypt words
 *
 * @s: string
 *
 * Return: string
*/

char *rot13(char *s)
{
	int i = 0;
	char c;

	while (s[i] != '\0')
	{
		c = s[i];
		if ((c >= 97 && c <= 109) || (c >= 65 && c <= 77))
			s[i] += 13;
		else if ((c >= 110 && c <= 122) || (c >= 78 && c <= 90))
			s[i] -= 13;
		i++;
	}
	return (s);
}
