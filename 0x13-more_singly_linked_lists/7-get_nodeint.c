#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 *
 * @head: head node
 *
 * @index: index of the node
 *
 * Return: integer
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
