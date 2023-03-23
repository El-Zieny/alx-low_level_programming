#include "main.h"
/**
 * print_diagonal - with \'s
 * @n: the num of \'s?
 */
void print_diagonal(int n)
{
	int c, x;

	for (c = 0; c < n; c++)
	{
		for (x = 0; x < c; x++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
