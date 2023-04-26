#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees its allocated memory
 * @d: pointer to the memory
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
