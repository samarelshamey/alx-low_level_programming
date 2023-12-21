#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of table
 * Return: hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t;

	new_t = malloc(sizeof(hash_table_t));
	if (!new_t)
		return (NULL);
	new_t->size = size;
	new_t->array = calloc(size, sizeof(hash_table_t *));
	if (!new_t->array)
	{
		free(new_t);
		return (NULL);
	}
	return (new_t);
}
