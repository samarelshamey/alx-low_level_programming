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
	const listint_t *temp = head;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("[%#010x] %d\n", (unsigned int)(uintptr_t)temp, temp->n);
		count++;
		if (temp <= temp->next)
		{
			printf("-> [%#010x] %d\n", (unsigned int)(uintptr_t)current->next, current->next->n);
			break;
		}
		temp = temp->next;
	}
	return (count);
}
