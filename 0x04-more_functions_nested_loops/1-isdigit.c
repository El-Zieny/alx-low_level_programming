#include "main.h"
/**
 * _isdigit - is digit or not
 * Description: checks if its a digit or not
 * Return: 1 if yes 0 if else
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
