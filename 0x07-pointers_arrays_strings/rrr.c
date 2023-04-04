#include <stdio.h>
/**
 * print_diagsums - check the code
 * @a: parent array
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, m;

	sum1 = 0;
	sum2 = 0;
	m = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i +m];
		m += size;
	}
	for (i = size - 1; i >= 0; i--)
		sum2 += a[i * size + (size - i - 1)];
	printf("%d, %d\n", sum1, sum2);
}
