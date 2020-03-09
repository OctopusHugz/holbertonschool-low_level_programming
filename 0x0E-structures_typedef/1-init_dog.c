#include "dog.h"
#define NULL 0

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to where new dog will reside in memory
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
