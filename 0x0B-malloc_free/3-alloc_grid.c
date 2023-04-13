#include <stdlib.h>
/**
 * alloc_grid - check the code
 * @width: true
 * @height: true
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width < 1 || height < 1)
		return ('\0');
	arr = malloc(sizeof(int) * height);
	if (!arr)
		return ('\0');
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (!arr[i])
			return ('\0');

	}
	for (i = 0; i < width * height; i++)
		*arr[i] = 0;
	return (arr);
}
