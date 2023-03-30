#include <string.h>
/**
 * _strncpy - check the code
 * @dest: destination
 * @src: source
 * @n: number
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, l, d;

	l = strlen(src);
	d = strlen(dest);
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	if (n <= l)
		dest[n + 1] = '\0';
	dest[] = dest[n + 1];
	return (dest);
}
