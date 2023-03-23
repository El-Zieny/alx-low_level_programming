#include "main.h"
/**
 * print_square - yes
 * @size: of the square ;D
 */
void print_square(int size)
{
	int n, m;

	for (n = 0; n < size; n++)
	{
		for (m = 0; m < size; m++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
