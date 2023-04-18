#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes type of variable of struct dog
 * @d: struct dog pointer to be initialize
 * @name: initialized name
 * @age: initialized age
 * @owner: initialized owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
