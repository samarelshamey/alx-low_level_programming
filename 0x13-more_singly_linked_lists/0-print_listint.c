#include "lists.h"

/**
 * print_listint - function to print linked list
 *
 * @h: head
 *
 * Return: integer
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
