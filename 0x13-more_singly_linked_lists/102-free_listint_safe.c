#include "lists.h"

/**
 * free_listint_safe - free list
 *
 * @h: head
 *
 * Return: integer
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *curr = *h;
	listint_t *next;
	size_t count = 0;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		count++;
		if (curr <= next)
			break;
		curr = next;
	}
	*h = NULL;
	return (count);
}
