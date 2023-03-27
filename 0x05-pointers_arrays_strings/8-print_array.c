#include "main.h"
#include <stdio.h>
/**
 * print_array - yes
 * @a: array
 * @n: index
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (!(n - ( i + 1)))
				printf(", ");
	}
}
