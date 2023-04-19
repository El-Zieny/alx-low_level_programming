#include <string.h>
/**
 * array_iterator - whatever
 * @array: array
 * @size: it's size
 * @action: func pointer
 */
void array_iterator(int *array, size_t size, void (*action(int)))
{
	int i, l;

	for (i = 0; i < size; i++)
		action(array[i]);
}
