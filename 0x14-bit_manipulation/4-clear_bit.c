#include "main.h"
/**
 * clear_bit - sets it to 0
 * @n: the bit container
 * @index: of the bit to clear
 * Return: 1 if works -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
