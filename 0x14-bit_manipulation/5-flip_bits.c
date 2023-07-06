#include <stdio.h>
/**
 * flip_bits - counts the number of bits needed to flip to represent another number
 * @n: 1st number
 * @m: 2nd number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, c, diff, bits;

	bits = 0;
	x = n | m;
	c = n & m;
	diff = x - c;
	while (diff)
	{
		if (diff & 1)
			bits += 1;
		diff = diff >> 1;
	}
	return (bits);
}
