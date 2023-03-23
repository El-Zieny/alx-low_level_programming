#include "main.h"
/**
 * print_triangle - exactly
 * @size: it's size
 */
void print_triangle(int size)
{
	int x;
	int n, m;

	m = size;
	for (x = 0;x < size; x++)
	{
		for (; m > 1; m--)
			_putchar(' ');
		m += 1;
		for (n = 1; n < x; n++)
			_putchar('#');
		_putchar('\n');
	}
}
