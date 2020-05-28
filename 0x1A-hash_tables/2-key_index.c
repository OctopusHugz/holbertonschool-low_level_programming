#include "hash_tables.h"

/**
 * key_index - returns the hash table index of a provided key
 * @key: provided key to find index of
 * @size: size of the hash table array
 *
 * Return: the index of the provided key
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ki = 0;

	ki = hash_djb2(key) % size;
	return (ki);
}
