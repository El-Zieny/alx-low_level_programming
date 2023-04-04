#include <stdio.h>
/**
 * print_diagsums - check the code
 * @a: parent array
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, x, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			if (i == x)
				sum1 += *(a + (i * size + x) * size);
		}
	}
	x = size - 1;
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += *(a + (i * size + x) * size);
		x--;
	}
	printf("%i, %i", sum1, sum2);
}
