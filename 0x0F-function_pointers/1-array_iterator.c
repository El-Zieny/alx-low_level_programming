#include <string.h>
/**
 * array_iterator - whatever
 * @array: array
 * @size: it's size
 * @action: is a function pointer
 */
void array_iterator(int *array, size_t size, void (*action(int)))
{
	unsigned int i;

	if (!array || !action)
		return
	for (i = 0; i < size; i++)
		action(array[i]);
}
