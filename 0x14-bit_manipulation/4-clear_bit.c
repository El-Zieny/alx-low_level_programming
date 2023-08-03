#include <stdio.h>
/**
 * clear_bit - set the bit at index to 0
 * @n: the bit container
 * @index: the index of the bit to be cleared
 * Return: 1 if success, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1 << index;

	if (index > 31)
		return (-1);
	if (*n & x)
		*n = *n - x;
	return (1);
}
