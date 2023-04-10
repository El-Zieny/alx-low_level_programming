#include "main.h"
/**
 * _isalpha - check the code
 * @c: is it an alphabet or not
 * Return: 1 if yes 0 of no
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
