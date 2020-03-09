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

	if (name == NULL || owner == NULL)
		return (NULL);

	dup_name = malloc((_strlen(name) + 1) * sizeof(char));
	if (dup_name == NULL)
	{
		free(dog);
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
 * @s: String to return the lenght of
 *
 * Return: 0 if success
 */

int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	for (; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - copies the string pointed to by src to buffer pointed to by dest
 * @dest: buffer destination to print to
 * @src: string to copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len]; len++)
		dest[len] = src[len];
	dest[len] = '\0';
	return (dest);
}
