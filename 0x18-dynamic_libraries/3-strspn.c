#include "main.h"

/**
 * _strspn - returns the n of bytes
 *
 * @s: pointer
 *
 * @accept: pointer
 *
 * Return: integer
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;
	int isAccept = 0;

	while (*s != '\0')
	{
		isAccept = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				isAccept = 1;
				break;
			}
		}
		if (!isAccept)
		{
			return (len);
		}
		len++;
		s++;
	}
	return (len);
}

