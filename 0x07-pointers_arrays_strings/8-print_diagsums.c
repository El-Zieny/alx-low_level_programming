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
	x = 1;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i + x];
		x += size;
	}
	x = 1;
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i - x];
		x += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
