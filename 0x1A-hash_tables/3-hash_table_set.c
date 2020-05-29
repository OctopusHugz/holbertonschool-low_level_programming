#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to add to
 * @key: key to add to hash table
 * @value: value associated with key to add to hash table
 *
 * Return: 1 if succeeded, 0 otherwise
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	ht->array[index] = add_node(ht->array[index], key, value);
	if (ht->array[index] == NULL)
		return (0);
	return (1);
}

/**
 * add_node - adds a node to a hash table index
 * @head: head node of linked list at hash table index
 * @key: key to add to hash table
 * @value: value associated with key to add to hash table
 *
 * Return: address of head if successful, return NULL if failure
 **/

hash_node_t *add_node(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new_node, *current;

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
	new_node = malloc(sizeof(hash_node_t));
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
