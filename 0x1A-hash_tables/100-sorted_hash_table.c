#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array of the sorted hash table
 *
 * Return: pointer to newly created sorted hash table, or NULL if it fails
 **/

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_sht = malloc(sizeof(shash_table_t) * 1);
	unsigned long int index = 0;

	if (new_sht == NULL)
		return (NULL);
	new_sht->array = malloc(sizeof(shash_node_t *) * size);
	if (new_sht->array == NULL)
		return (NULL);
	while (index < size)
	{
		new_sht->array[index] = NULL;
		index++;
	}
	new_sht->size = size;
	return (new_sht);
}

/**
 * shash_table_set - adds an element to a sorted hash table
 * @ht: sorted hash table to add to
 * @key: key to add to sorted hash table
 * @value: value associated with key to add to sorted hash table
 *
 * Return: 1 if succeeded, 0 otherwise
 **/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	ht->array[index] = sadd_node(ht->array[index], key, value);
	if (ht->array[index] == NULL)
		return (0);
	return (1);
}

/**
 * sadd_node - adds a node to a sorted hash table index
 * @head: head node of linked list at sorted hash table index
 * @key: key to add to sorted hash table
 * @value: value associated with key to add to sorted hash table
 *
 * Return: address of head if successful, return NULL if failure
 **/

shash_node_t *sadd_node(shash_node_t *head, const char *key, const char *value)
{
	shash_node_t *new_node, *current;

	current = head;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (head);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (head == NULL)
	{
		head = new_node;
		return (head);
	}
	new_node->next = head;
	head = new_node;
	return (head);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: sorted hash table to print
 **/

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	unsigned long int c_index = 0, index = 0, num_elements = 0;

	if (ht == NULL)
		return;
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

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: sorted hash table to print in reverse
 **/

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	unsigned long int c_index = 0, index = 0, num_elements = 0;

	if (ht == NULL)
		return;
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

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table to delete
 **/

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index = 0;
	shash_node_t *current, *temp;

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
