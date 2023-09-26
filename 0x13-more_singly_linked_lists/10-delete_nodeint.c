#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at certain pos
 *
 * @head: head node
 *
 * @index: node index
 *
 * Return: intger
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;

	if (*head == NULL)
		return (-1);

	while (index == 0)
	{
		curr = *head;
		*head = curr->next;
		free(curr);
		return (1);
	}
	curr = *head;
	prev = NULL;

	while (index != 0)
	{
		if (curr == NULL)
			return (-1);
		prev = curr;
		curr = curr->next;
		index--;
	}
	prev->next = curr->next;
	free(curr);
	return (1);
}
