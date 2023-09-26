#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at certain pos
 *
 * @head: head
 *
 * @idx: index of node
 *
 * @n: elements
 *
 * Return: integer
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	temp = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	idx--;

	while (idx != 0)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
		idx--;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
