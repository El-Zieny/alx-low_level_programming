#include <stdio.h>
/**
 * print_diagsums - check the code
 * @a: parent array
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, x, sum1, sum2, n;

	sum1 = 0;
	sum2 = 0;
	x = 0;
	n = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i + x + n];
		x += size;
		if (!n)
			n = 1;
	}
	x = 0;
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i - x - n];
		x += size;
		if (!n)
			n = 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
