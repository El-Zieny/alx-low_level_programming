#include <stdio.h>
/**
 * flip_bits - counts the number of bits needed to be flipped
 * @n: number 1
 * @m: number 2
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int i = 0;

	for (; x;)
	{
		if (x & 1)
			i++;
		x = x >> 1;
	}
	return (i);
}
