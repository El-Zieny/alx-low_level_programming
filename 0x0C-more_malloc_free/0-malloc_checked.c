#include <stdlib.h>
/**
 * malloc_checked - check the code
 * @b: bytes
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (malloc(b));

}
