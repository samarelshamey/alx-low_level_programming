#include "lists.h"
#include <string.h>

/**
 * *add_node - function to add node
 *
 * @head: head
 *
 * @str: data
 *
 * Return: integer
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

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
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
