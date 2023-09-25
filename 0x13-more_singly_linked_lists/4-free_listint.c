#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: head
 *
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	head = temp;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
