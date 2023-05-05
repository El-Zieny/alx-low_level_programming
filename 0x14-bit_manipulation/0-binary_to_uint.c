#include "main.h"
/**
 * _pow - power
 * @base: the base number
 * @power: the power number
 * Return: the result
 */

unsigned int _pow(unsigned int base, unsigned int power)
{
	unsigned int x;

	if (!power)
		return (1);
	x = 1;
	while (power)
	{
		x = x * base;
		power--;
	}
	return (x);
}
/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: the string of the binary number
 * Return: the uint result of the conversion or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, i;
	int c;

	if (!b)
		return (0);
	x = strlen(b);
	c = x - 1;
	i = 0;
	while (c >= 0)
	{
		if (b[c] == '1')
			i += _pow(2, (x - 1) - c);
		else if (b[c] != '0')
			return (0);
		c--;
	}
	return (i);
}
