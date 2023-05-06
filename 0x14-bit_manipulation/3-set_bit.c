#include "main.h"
/**
 * set_bit - yes
 * @n: the bit container
 * @index: of a bit to set
 * Return: 1 if worked -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	*n |= 1 << index;
	return (1);
}
