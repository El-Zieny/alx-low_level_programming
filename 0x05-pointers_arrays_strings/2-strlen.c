#include "main.h"
/**
 * _strlen - string length
 * @s: the string
 * Return: integer
 */
int _strlen(char *s)
{
	int c;

	c = *s;
	
	for (;c != '\0';)
		c += 1;
	
	return (c);
}
