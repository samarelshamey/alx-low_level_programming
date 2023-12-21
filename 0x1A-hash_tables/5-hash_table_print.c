#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 *
 * @ht: hash table
 * Return: nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	char f = 0;
	unsigned long int x;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		ptr = ht->array[x];
		while (ptr != NULL)
		{
			if (f == 1)
				printf(", ");
			printf("'%s' : '%s'", ptr->key, ptr->value);
			f = 1;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
