#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: a pointer to first element of the search field
 * @size: number of elements of the array
 * @value: the value to search for
 * Return: the index of the value or -1 if not possible
*/
int linear_search(int *array, size_t size, int value){
	size_t x;

	if (!array)
		return (-1);

	for (x = 0; x < size; x++){
		printf("Value checked array[%lu] = [%i]\n", x, array[x]);
		if (array[x] == value){
			return (x);
		}
	}
	return (-1);
}
