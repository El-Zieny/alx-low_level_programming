#include "main.h"
/**
 * _strlen - string length
 * @s: the string
 * Return: integer
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	for (; *s != '\0'; s++)
		c += 1;
	return (c);
}
