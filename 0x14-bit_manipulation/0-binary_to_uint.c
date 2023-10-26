#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 *
 * @b: pointer to string
 *
 * Return: integer
 *
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int len;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		res = res * 2 + (b[i] - '0');
	}
	return (res);
}
