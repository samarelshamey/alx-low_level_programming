#include "main.h"

/**
 * _islower - function used to check for lowercase character
 *
 * @c: iput
 *
 * Return: retun 1 if c is lowercase  otherwise 0 (success)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
