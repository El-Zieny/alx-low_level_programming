#include "main.h"
/**
 * flip_bits - check the code
 * @n: 1st num
 * @m: 2nd num
 * Return: the number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, o, res, f;

	f = 0;
	a = n & m;
	o = n | m;
	res = o - a;
	while (res > 0)
	{
		if (res & 1)
			f++;
		res = res >> 1;
	}
	return (f);
}
