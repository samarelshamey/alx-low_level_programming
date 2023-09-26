#include "lists.h"

/**
 * reverse_listint - reverse the list
 *
 * @head: head
 *
 * Return: integer
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *temp2 = NULL;

	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp2;
	}
	*head = temp;
	return (*head);
}
