#include "lists.h"

/**
 * add_node_end - function to add node at the end
 *
 * @head: head
 *
 * @str: data
 *
 * Return: integer
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *temp;

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (ptr);
}
