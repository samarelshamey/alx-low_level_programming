#include "lists.h"

/**
 * add_nodeint - add node at the beginning
 *
 * @head: pointer to first node
 *
 * @n: number
 *
 * Return: integer
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
