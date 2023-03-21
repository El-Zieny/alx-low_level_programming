#include <stdio.h>
#include "main.h"
/**
 * print_times_table - exactly
 * @n: table num
 */
void print_times_table(int n)
{
	int a[n];
	int x;
	int z, m, t;

	for (x = 0; x <= n; x++)
		a[x] = x;
	for (z = 0; z <= n; n++)
	{
		for (m = 0; m <= n; m++)
		{
			t = a[z] * a[m];
			if (t > 9 && t < 100)
				_putchar(' ');
			if (t > 99)
			_putchar(t / 100 + '0');
			if (t > 9)
			_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
			if (m != n)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
}
