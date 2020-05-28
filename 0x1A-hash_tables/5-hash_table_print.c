#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int num_elements = 0;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index])
			num_elements++;
		index++;
	}
	index = 0;
	while (index < ht->size)
	{
		if (ht->array[index])
		{
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			num_elements--;
			if (num_elements != 0)
				printf(", ");
		}
		index++;
	}
	printf("}\n");
}
