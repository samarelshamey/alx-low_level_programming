#include "main.h"

/**
 * cap_string - function to capitalize words
 *
 * @s: string
 *
 * Return: ptr
*/

char *cap_string(char *s)
{
	int cap_next = 1;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (cap_next && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		cap_next = 0;
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
				cap_next = 1;
				break;
		}
	}
	return (s);
}
