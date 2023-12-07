#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at spec index
 *
 * @h: head
 * @idx: index
 * @n: data
 * Return: head
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *ptr1 = *h, *ptr2 = NULL;
	unsigned int pos = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	
	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}

	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (*h);
	}
	while (pos < idx - 1)
	{
		if (ptr1 == NULL)
		{
			free(new);
			return (NULL);
		}
		ptr1 = ptr1->next;
		pos++;
	}
	ptr2 = ptr1->next;
	new->prev = ptr1;
	ptr1->next = new;
	if (ptr2 != NULL)
	{
		new->next = ptr2;
		ptr2->prev = new;
	}
	return (*h);
}
