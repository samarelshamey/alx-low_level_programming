#include "main.h"

/**
 * cap_string - function to capitalize words
 *
 * @s: string
 *
 * Return: pointer
*/

char *cap_string(char *s)
{
	int i;
	int capitalize_next = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (capitalize_next && s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		capitalize_next = 0;
		switch (s[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				capitalize_next = 1;
				break;
		}
	}
	return (s);
}
