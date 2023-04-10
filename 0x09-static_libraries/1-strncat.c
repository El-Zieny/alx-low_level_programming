#include "main.h"
/**
 * _strncat - check the code
 * @dest: destination
 * @src: source
 * @n: limitation
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1, l2, i;

	l1 = _strlen(dest);
	l2 = _strlen(src);
	if (n > l2)
		n = l2;
	for (i = 0; i < n; i++)
	{
		dest[l1] = src[i];
		l1++;
	}
	return (dest);
}
