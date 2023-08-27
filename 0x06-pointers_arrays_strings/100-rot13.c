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
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'Z'))
			s[i] += 13;
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
			s[i] -= 13;
	}
	return (s);
}
