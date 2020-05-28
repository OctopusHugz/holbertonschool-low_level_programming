/**
 * hash_djb2 - creates a hash code for the provided key
 * @str: key to create hash code from
 *
 * Return: pointer to newly created hash table, or NULL if it fails
 **/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
