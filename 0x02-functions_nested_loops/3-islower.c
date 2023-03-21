#include "main.h"
/**
 * _islower - check the code
 * @parameter: islower or not
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
