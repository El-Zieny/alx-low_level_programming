#include <stdlib.h>
/**
 * _calloc - check the code
 * @nmemb: yes
 * @size: yes
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	arr = malloc(nmemb*size);
	if (!arr)
		return ('\0');
	return (arr);
}
