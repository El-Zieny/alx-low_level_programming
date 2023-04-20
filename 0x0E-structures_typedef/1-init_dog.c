#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializing a dog
 * @d: the dog
 * @name: it's name
 * @age: it's age
 * @owner: it's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(dog));
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
