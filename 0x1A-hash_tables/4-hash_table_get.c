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
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(key, current->key) == 0)
				return (current->value);
			current = current->next;
		}
	}
	return (NULL);
}
