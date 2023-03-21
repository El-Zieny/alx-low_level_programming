#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - exactly
 * @n: start point
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		for (; n < 99; n++)
		{
			if ( n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}

	}
	else
	{
		for (; n > 97; n--)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
	}
	putchar('\n');
}
