#include "lists.h"

/**
 * list_len - function return number of elements
 *
 * @h: header
 *
 * Return: integer
*/

size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
