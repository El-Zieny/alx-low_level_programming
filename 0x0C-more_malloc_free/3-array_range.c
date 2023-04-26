#include <stdlib.h>
/**
 * array_range - check the code
 * @min: minimum
 * @max: maximum
 * Return: int
 */
int *array_range(int min, int max)
{
	int *arr, n, i;

	if (min > max)
		return ('\0');
	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return ('\0');
	n = min;
	i = 0;
	while (n <= max)
	{
		arr[i] = n;
		n++;
		i++;
	}
	return (arr);
}
