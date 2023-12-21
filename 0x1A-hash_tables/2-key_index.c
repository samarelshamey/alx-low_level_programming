#include "hash_tables.h"

/**
 * key_index - return index of hash table
 * @key: key
 * @size: size of tble
 * Return: integer
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
