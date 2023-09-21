#include "lists.h"

/**
 * free_list - function 
 *
 * @head: head
 *
 * Return: nothing
*/

void free_list(list_t *head)
{
	free(head);
}
