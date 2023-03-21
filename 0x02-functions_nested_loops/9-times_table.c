#include "main.h"
/**
 * times_table - prints times table
 */

void times_table(void)
{
	int m;
	int n;
	int x;
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (x = 0; x <= 10; x++)
	{
		for (n = 0; n < 10; n++)
		{
			m = a[x] * a[n];
			if (n != 0)
				_putchar(' ');
			if (m < 10)
				_putchar(m + '0');
			else
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			if (n != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
