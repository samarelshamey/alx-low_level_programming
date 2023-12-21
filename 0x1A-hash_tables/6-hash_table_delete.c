#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *current;
	unsigned long int x;

	if (!ht)
		return;
	for (x = 0; x < ht->size; x++)
	{
		current = ht->array[x];
		while (current)
		{
			ptr = current;
			current = current->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}

	}
	free(ht->array);
	free(ht);
}
