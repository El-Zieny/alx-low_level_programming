#include <stdio.h>
/**
 * print_binary - prints a binary of an unsigned long int
 * @n: the unsined long int to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	print_binary(n >> 1);
	if (n & 1)
		printf("1");
	else
		printf("0");
}
