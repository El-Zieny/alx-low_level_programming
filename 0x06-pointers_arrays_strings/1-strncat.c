#include "main.h"
#include <string.h>
/**
 * _strncat - limitable
 * @dest: destination
 * @src: source
 * @n: limitation
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1, l2, i;

	l1 = strlen(dest);
	l2 = strlen(src);
	if (n > l2)
		n = l2;
	for (i = 0; i < n; i++)
	{
		dest[l1] = src[i];
		l1++;
	}
	return (dest);
}
