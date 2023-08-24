#include "main.h"

/**
 * cap_string - function to capitalize words
 *
 * @s: string
 *
 * Return: char
*/

char *cap_string(char *s)
{
	int i = 0;
	int cap_next = 1;
	char separators[] = " \n\t,;.!?\"(){}";
	char *sep = separators;

	while (s[i] != '\0')
	{
		if (s[i] == *sep)
		{
			cap_next = 1;
		}
		else if (cap_next)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 'a' + 'A';
			}
			cap_next = 0;
		}
		i++;
	}
	return (s);
}
