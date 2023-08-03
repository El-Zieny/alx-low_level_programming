#include <stdio.h>
/**
 * set_bit - sets the value of bit at index to 1
 * @n: pointer to bit container
 * @index: the index of the bit
 * Return: 1 if succes -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int x = 1 << index;

	if (index > 31)
		return (-1);

	*n = *n | x;
	return (1);
}
