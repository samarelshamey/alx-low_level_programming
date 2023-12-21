#include "hash_tables.h"

/**
 * hash_table_set - insert element into hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: integer
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *current;
	unsigned long int ind;

	if (!ht || !key || !value)
		return (0);
	ind = hash_djb2((unsigned char *)key) % ht->size;
	current = ht->array[ind];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->value);
		free(new);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->next = ht->array[ind];
	ht->array[ind] = new;
	return (1);
}
