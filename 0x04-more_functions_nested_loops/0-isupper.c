#include "main.h"
/**
 * main - is upper
 * @c: is upper?
 * Return: 1 if upper 0 if else
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
