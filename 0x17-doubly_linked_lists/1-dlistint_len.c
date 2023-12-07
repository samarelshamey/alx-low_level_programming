#include "lists.h"

/**
 * dlistint_len - return number of element in list
 *
 * @h: head
 * Return: integer
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
