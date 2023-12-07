#include "lists.h"

/**
 * print_dlistint - print list
 * @h: head
 * Return: integer
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
