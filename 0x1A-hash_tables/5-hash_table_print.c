#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 **/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int c_index = 0, index = 0, num_elements = 0;

	printf("{");
	while (c_index < ht->size)
	{
		if (ht->array[c_index])
		{
			current = ht->array[c_index];
			while (current)
			{
				num_elements++;
				current = current->next;
			}
		}
		c_index++;
	}
	while (index < ht->size)
	{
		if (ht->array[index])
		{
			current = ht->array[index];
			while (current)
			{
				printf("'%s': '%s'", current->key, current->value);
				num_elements--;
				if (num_elements != 0)
					printf(", ");
				current = current->next;
			}
		}
		index++;
	}
	printf("}\n");
}
