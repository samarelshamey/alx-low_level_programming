#include "main.h"

/**
 * rev_string - function reverse the string
 *
 * @s: string
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int len;
	int i;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
