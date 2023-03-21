#include "main.h"
/**
 * print_last_digit - exactly
 * @n: getting its last digit
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	_putchar(r + '0');
	return (r);
}
