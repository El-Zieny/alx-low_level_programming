#include <stdlib.h>
#include <string.h>
/**
 * _calloc - check the code
 * @nmemb: yes
 * @size: yes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (!nmemb || !size)
		return ('\0');
	arr = malloc(nmemb * size);
	if (!arr)
		return ('\0');
	memset(arr, 0, nmemb * size);
	return (arr);
}
