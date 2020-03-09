#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *dup_name, *dup_owner;

	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	dup_name = malloc((_strlen(name) + 1) * sizeof(char));
	if (dup_name == NULL)
	{
		free(dup_name);
		return (NULL);
	}

	dup_owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (dup_owner == NULL)
	{
		free(dog);
		free(dup_name);
		free(dup_owner);
		return (NULL);
	}

	_strcpy(dup_name, name);
	_strcpy(dup_owner, owner);

	dog->name = dup_name;
	dog->age = age;
	dog->owner = dup_owner;
	return (dog);
}

/**
 * _strlen - returns the length of a string
 * @s: a string (pointer to the first letter) provided by user
 * Return: string length
 */
int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * *_strcpy - copies a string to *dest
 *@dest: Pointer to copy string to
 *@src: string to copy
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
