#include "main.h"
/**
 * _strlen - string length
 * @s: the string
 * Return: integer
 */
int _strlen(char *s)
{
	int c;

	c = sizeof(s);
	/**
	* for (*(s + c); *s != '\0';)
	* 	c += 1;
	*/
	return (c);
}
