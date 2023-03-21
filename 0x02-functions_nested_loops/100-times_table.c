#include <stdio.h>
#include "main.h"
/**
 * print_times_table - exactly
 * @n: table num
 */
void print_times_table(int n)
{
/*	int a[n + 1];*/

	int x, m, t;

	for (x = 0; x <= n; x++)
	{
		for (m = 0; m <= n; m++)
		{
			t = x * m;
			if (t > 9 && t < 100)
				_putchar(' ');
			else if (t < 9 && m != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			if (t > 99)
			_putchar(t / 100 + '0');
			if (t > 9)
			_putchar(t % 100 + '0');
			_putchar(t % 10 + '0');
			if (m != n)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
