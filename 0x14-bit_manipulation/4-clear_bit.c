#include <stdio.h>
/**
 * clear_bit - sets a specific bit to 0
 * @n: bit container
 * @index: of the bit
 * Return: 1 if success -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 31)
		return (-1);
	x = 1;
	x = x << index;
	x = ~x;
	*n = *n & x;
	return (1);
}
