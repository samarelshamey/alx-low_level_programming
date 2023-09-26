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
	const listint_t *s = head, *f = head;
	size_t count = 0;

	while (f != NULL && f->next != NULL)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		count++;
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
			printf("[%p] %d", (void *)s, s->n);
			count++;
			break;
		}
	}
	if (f == NULL || f->next == NULL)
	{
		while (s != NULL)
		{
			printf("[%p] %d\n", (void *)s, s->n);
			count++;
			s = s->next;
		}
	}
	else
	{
		s = head;
		while (s != f)
		{
			printf("[%p] %d\n", (void *)s, s->n);
			count++;
			s = s->next;
			f = f->next;
		}
		printf("[%p] %d\n", (void *)s, s->n);
		count++;
	}
	return (count);
}
