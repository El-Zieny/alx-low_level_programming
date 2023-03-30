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
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i])
			dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
