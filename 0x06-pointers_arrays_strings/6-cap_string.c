#include "main.h"
/**
 * isLower - function to lowercase
 *
 * Description: function to lowercase
 *
 * @c: character
 *
 * Return: character
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - function
 *
 * @c : char
 *
 * Return: index
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \n\t,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (i);
	return (0);
}

/**
 * cap_string - function to capitalize words
 *
 * @s: string
 *
 * Return: pointer
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
