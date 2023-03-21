#include "main.h"
/**
 * print_sign - check the code
 * @n: is positive or negative
 * Return: 1 of p 0 if 0 -1 if n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}
