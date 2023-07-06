#include <stdio.h>
/**
 * set_bit - sets a spicific bit to a specific value
 * @n: the bit container
 * @index: the index of the bit inn n to be set
 * Return: 1 if success -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x, m;

	m = *n;
	if (index > 31)
		return (-1);
	x = 1;
	x = x << index;
	m = m | x;
	*n = m;
	return (*n);
}
