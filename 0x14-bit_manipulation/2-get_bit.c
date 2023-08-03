#include <stdio.h>
/**
 * get_bit - get the value of bit at index
 * @n: the var that contains the bit
 * @index: the index of the bit to be gotten
 * Return: the value of the bit or -1 if fail
 */
int get_bit(unsigned long int n, unsigned long int index)
{
	if (index > 31)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	return (0);
}
