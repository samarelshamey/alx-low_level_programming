#include "main.h"
/**
 * _isalpha - function used to check for alphabetic character
 *
 * @c : input
 *
 * Return: 1 if c is a letter, lowercase or uppercase and return 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
