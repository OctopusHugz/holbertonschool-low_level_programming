#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 **/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *current, *temp;

	while (index < ht->size)
	{
		if (ht->array[index])
		{
			current = ht->array[index];
			while (current)
			{
				temp = current;
				current = current->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
