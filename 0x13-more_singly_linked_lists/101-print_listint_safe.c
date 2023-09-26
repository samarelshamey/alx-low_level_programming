#include "lists.h"

/**
 * print_listint_safe - print function
 *
 * @head: head
 *
 * Return: integer
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
		current = current->next;
	}
	return (count);
}
