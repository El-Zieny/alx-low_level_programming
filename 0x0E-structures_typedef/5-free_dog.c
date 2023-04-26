#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees its allocated memory
 * @d; pointer to the memory
 */
void free_dog(dog_t *d)
{
	free(d);
}
