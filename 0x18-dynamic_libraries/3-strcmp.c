#include "main.h"

/**
 * _strcmp - function to compare two strings
 *
 * @s1: pointer1
 *
 * @s2: pointer2
 *
 * Return: intger
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '0' && s1[i] == s2[i])
	{
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}
