#include "main.h"
/**
 * print_line - exactly _Xn
 * @n: n's?
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0;c < n; c++)
			_putchar('_');
	}
	_putchar('\n');
}
