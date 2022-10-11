#include "dog.h"
#include "stdlib.h"

/**
 * int_dog - initialises a variable of type struct dog.
 * @d: the dod to be innitialised.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
