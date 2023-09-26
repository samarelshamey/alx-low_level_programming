#include "lists.h"

/**
 * sum_listint - sum elements
 *
 * @head: head
 *
 * Return: integer
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
