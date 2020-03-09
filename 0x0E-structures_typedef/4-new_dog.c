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
	dog_t *dog;
	char *dup_name, *dup_owner;

	if (name == NULL)
		return (NULL);
	dup_name = _strdup(name);

	if (owner == NULL)
		return (NULL);
	dup_owner = _strdup(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = dup_name;
	dog->age = age;
	dog->owner = dup_owner;
	return (dog);
}

/**
 * _strdup - copies a string into newly allocated memory and returns pointer
 * @str: string to copy into new memory space
 *
 * Return: pointer to newly allocated memory
 */

char *_strdup(char *str)
{
	int i, len;
	char *array;

	/* loop through str to find length and store in len if str != NULL */

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	/* malloc memory for new array and return NULL if not enough memory */

	array = (char *) malloc(sizeof(char) * len + 1);

	if (array == NULL)
		return (NULL);

	/* copy str into new array */

	for (i = 0; i < len; i++)
		array[i] = str[i];

	/* return pointer to newly allocated memory */

	return (array);
}
