#include <stdio.h>
/**
 * print_binary - prints a binary of an unsigned long int
 * @n: the unsined long int to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
