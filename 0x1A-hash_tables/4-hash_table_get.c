#include "hash_tables.h"

/**
 * hash_table_get - retrieve and element
 * @ht: hash table
 * @key: key
 * Return: value
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (!ht || !key)
		return (NULL);

	i = hash_djb2((unsigned char *)key) % ht->size;

	node = ht->array[i];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
