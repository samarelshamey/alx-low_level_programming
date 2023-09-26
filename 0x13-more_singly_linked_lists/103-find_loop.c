#include "lists.h"

/**
 * find_listint_loop - find loop
 *
 * @head: head node
 *
 * Return: address of the node
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *f = head;

	while (f != NULL && f->next != NULL)
	{
		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (s);
		}
	}
	return (NULL);
}
