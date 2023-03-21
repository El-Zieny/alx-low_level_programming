#include "main.h"
/**
 * print_last_digit - exactly
 * @n: getting its last digit
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = n * -1;
	r = n % 10;
	_putchar('0' + r);
	return (r);
}
