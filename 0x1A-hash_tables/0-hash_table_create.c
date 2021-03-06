#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array of the hash table
 *
 * Return: pointer to newly created hash table, or NULL if it fails
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = malloc(sizeof(hash_table_t) * 1);
	unsigned long int index = 0;

	if (new_ht == NULL)
		return (NULL);
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_ht->array == NULL)
		return (NULL);
	while (index < size)
	{
		new_ht->array[index] = NULL;
		index++;
	}
	new_ht->size = size;
	return (new_ht);
}
