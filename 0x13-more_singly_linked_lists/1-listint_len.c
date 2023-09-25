#include "lists.h"

/**
 * listint_len - function return number of elements
 *
 * @h: head
 *
 * Return: integer
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
