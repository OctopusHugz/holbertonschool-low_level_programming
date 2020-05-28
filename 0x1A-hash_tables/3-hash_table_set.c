#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to add to
 * @key: key to add to hash table
 * @value: value associated with key to add to hash table
 *
 * Return: 1 if suceeded, 0 otherwise
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (strcmp(key, "") == 0)
		return (0);
	ht->array[index] = add_node(ht->array[index], key, value);
	return (1);
}

/**
 * add_node - adds a node to a hash table index
 * @head: head node of linked list at hash table index
 * @key: key to add to hash table
 * @value: value associated with key to add to hash table
 *
 * Return: address of new node if successful, return NULL if failure
 **/

hash_node_t *add_node(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = head;
	head = new_node;
	return (head);
}
