#include "main.h"
/**
 * get_bit - yes
 * @n: the bit holder
 * @index: of the bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x = ((n >> index) & 1);

	if (index > 63)
		return (-1);
	if (x == 1)
		return (1);
	else if (x == 0)
		return (0);
	else
		return (-1);
}
