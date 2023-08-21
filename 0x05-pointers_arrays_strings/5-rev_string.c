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
	int len = 0;
	int i;

	while (len != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
}
/**
 * main - entry point
 *
 * Return: 0 (success)
*/

int main(void)
{
	rev_string(*s);
	return (0);
}
