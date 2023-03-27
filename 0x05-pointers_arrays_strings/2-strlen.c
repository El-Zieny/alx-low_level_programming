#include "main.h"
/**
 * _strlen - string length
 * @s: the string
 * Retunr: integer
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	for (*(s + c); *s != '\0';)
		c += 1;
	return (c);
}
