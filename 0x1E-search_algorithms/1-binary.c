#include "search_algos.h"
/**
 * binary_search - a binary search algorithm
 * @array: a pointer to first element of the array to search in
 * @size: is the number of elements in the array
 * @value: the target value to search for
 * Return: the index of target value or -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	int max, min, check, i, x;

	if (array == NULL)
		return (-1);


	max = size - 1;
	min = 0;

	while (min <= max)
	{
		i = (max + min) / 2;
		check = array[i];
		printf("Searching in array: ");
		for (x = min; x < max; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[max]);
		if (check > value)
		{
			max = i - 1;
			continue;
		}
		else if (check < value)
		{
			min = i + 1;
			continue;
		}
		else
		{
			return (i);
		}

	}
	return (-1);
}
