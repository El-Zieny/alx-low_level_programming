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
	int i, l;

	/*
	 * int l;
	 * l = strlen(src);
	if (n > l)
		n = l + 1;*/
	l = strlen(src);
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	if (n <= l)
		dest[++i] = '\0';
	return (dest);
}
