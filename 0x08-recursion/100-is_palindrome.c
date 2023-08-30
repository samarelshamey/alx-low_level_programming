#include "main.h"

/**
 * is_palindrome - function  returns 1 if a string is a palindrome
 *
 * @s: pointer to string
 *
 * Return: intger
*/

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (helper(s, 0, end - 1, end % 2));
}

/**
 * last_index - function to return last index
 *
 * @s: pointer
 *
 * Return: intger
*/

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

/**
 * helper - function checks palindrome numbers
 *
 * @s: pointer
 *
 * @start: intger
 *
 * @end: intger
 *
 * Return: intger
*/

int helper(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end +1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	return (helper(s, start + 1, end - 1, mod));
}
