#include "lists.h"
/**
 * print_list - function to print linked list elements
 *
 * @h: header
 *
 * Return: integer
*/

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		count++;
	}
	return (count);
}
