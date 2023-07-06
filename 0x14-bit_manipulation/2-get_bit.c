#include <stdio.h>
/**
 * get_bit - check the value of a specific bit
 * @n: the bit container
 * @index: the bit's index
 * Return: it's value or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	n = n >> index;
	if (n & 1)
		return (1);
	else
		return (0);
}
