#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to add to
 * @key: key to add to hash table
 * @value: value associated with key to add to hash table
 *
 * Return: 1 if suceeded, 0 otherwise
 **/

/* int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index = 0;

	if (strcmp(key, "") == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t) * 1);
	if (new_node == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
} */

/* int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index = 0;

	if (strcmp(key, "") == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t) * 1);
	if (new_node == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
} */

/* int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index = 0;

	if (strcmp(key, "") == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t) * 1);
	if (new_node == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	temp = ht->array[index];
	new_node->next = temp;
	ht->array[index] = new_node;
	return (1);
} */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;

	if (strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	ht->array[index] = add_node(ht->array[index], key, value);
	return (1);
}

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
