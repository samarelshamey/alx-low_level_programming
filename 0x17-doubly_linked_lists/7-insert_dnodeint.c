#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at spec index
 *
 * @h: head
 * @idx: index
 * @n: data
 * Return: node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *ptr = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}
	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = ptr;
	new->next = ptr->next;
	ptr->next->prev = new;
	ptr->next = new;
	return (new);
}
