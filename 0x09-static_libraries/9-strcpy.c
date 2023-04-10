#include "main.h"
#include <string.h>
/**
 * _strcpy - coppies
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = strlen(src), n;

	for (n = 0; n <= i; n++)
		dest[n] = src[n];
	return (dest);
}
