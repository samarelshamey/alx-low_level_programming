#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - checks if character is digit
 * @c: character
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - check the length of  string
 *
 * @s: string
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * big_multiply - multiply two big number strings
 * @s1: the first  string
 * @s2: the second string
 *
 * Return: char
 */
char *big_multiply(char *s1, char *s2)
{
	char *ptr;
	int l1, l2, a, b, c, x;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	ptr = malloc(a = x = l1 + l2);
	if (!ptr)
		printf("Error\n"), exit(98);
	while (a--)
		ptr[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(ptr);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(ptr);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';

			c += ptr[l1 + l2 + 1] + (a * b);
			ptr[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			ptr[l1 + l2 + 1] += c;
	}
	return (ptr);
}


/**
 * main - entry point
 * @argc: count
 * @argv: value
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	char *ptr;
	int y, z, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	ptr = big_multiply(argv[1], argv[2]);
	z = 0;
	y = 0;
	while (z < x)
	{
		if (ptr[z])
			y = 1;
		if (y)
			_putchar(ptr[z] + '0');
		z++;
	}
	if (!y)
		_putchar('0');
	_putchar('\n');
	free(ptr);
	return (0);
}
