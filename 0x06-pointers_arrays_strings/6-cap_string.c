#include "main.h"
#include <stdio.h>

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
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
