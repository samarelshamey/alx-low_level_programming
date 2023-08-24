#include "main.h"

/**
 * rot13 - function
 *
 * @s: string
 *
 * Return: string
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];

		if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		{
			s[i] += 13;
		}
		else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		{
			s[i] -= 13;
		}
	}
	return (s);
}
