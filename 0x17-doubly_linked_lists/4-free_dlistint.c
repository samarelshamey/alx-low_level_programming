#include "lists.h"

/**
 * free_dlistint - free list
 *
 * @head: head
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
