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
	listint_t *temp = head;

	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		head = temp;
	}
}
