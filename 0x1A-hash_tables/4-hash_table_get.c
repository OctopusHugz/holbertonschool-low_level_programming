#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with the provided key
 * @ht: hash table to retrieve value from
 * @key: key to retrieve value of in hash table
 *
 * Return: value associated with key, or NULL if key is not found
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
		return (ht->array[index]->value);
	return (NULL);
}
