#include <stdio.h>
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endianness, 1 if little endianness
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *ptr = (char *)&x;

	return (*ptr);
}
