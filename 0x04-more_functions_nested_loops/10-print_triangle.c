#include "main.h"
/**
 * print_triangle - exactly
 * @size: it's size
 */
void print_triangle(int size)
{
	int x;
	int n, m;

	if (size > 0)
	{
	for (x = 0;x < size; x++)
	{
		m = size - x;
		for (; m > 1; m--)
			_putchar(' ');
		for (n = -1; n < x; n++)
			_putchar('#');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
