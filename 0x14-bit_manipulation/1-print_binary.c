#include <stdio.h>
/**
 * print_binary - converts from decimal to binary
 * @n: the decimal to be converted to binary
 */
void print_binary(unsigned long int n)
{
	if (!n)
		putchar('0');
	else if (n == 1)
		putchar ('1');
	else
	{
		print_binary(n >> 1);
		putchar('0' + (n & 1));
	}
}
