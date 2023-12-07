#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; ptr != NULL && i < idx ; i++)
		ptr = ptr->next;
	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));
	new->n = n;
	new->prev = ptr;
	new->next = ptr->next;
	ptr->next->prev = new;
	ptr->next = new;

	return (new);
}
