#include "lists.h"

/**
 * add_dnodeint - add node at the beggining of list
 *
 * @head: head
 * @n: data
 * Return: head
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	temp->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (temp);
}
