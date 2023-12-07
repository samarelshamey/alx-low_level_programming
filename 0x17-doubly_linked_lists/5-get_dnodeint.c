#include "lists.h"

/**
 * get_dnodeint_at_index - return node at spec index
 * @head: head
 * @index: node index
 * Return: node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int pos = 0;

	if (head == NULL)
		return (NULL);
	while (pos < index && ptr != NULL)
	{
		ptr = ptr->next;
		pos++;
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
