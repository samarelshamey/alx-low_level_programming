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

	while (head != NULL)
	{
		head = temp;
		head = head->next;
		free(temp);
	}
}
