#include "main.h"
/**
 * print_binary - converts from an unsigned ling int to binary
 * @n: the ulint number to be converted
 */
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}