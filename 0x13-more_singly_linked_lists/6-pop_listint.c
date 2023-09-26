#include "lists.h"

/**
 * pop_listint - delete head node and return data
 *
 * @head: head node
 *
 * Return: integer
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
