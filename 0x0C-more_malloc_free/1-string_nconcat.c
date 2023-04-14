#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - memcpy with strings
 * @s1: first
 * @s2: second string
 * @n: bytes
 * Return: the result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l, m;
	char *res;

	l = strlen(s1);
	m = strlen(s2);
	res = malloc(n + l + 1);
	if (!res)
		return ('\0');
	if (n > m)
		n = m;
	memcpy(res, s1, l);
	memcpy(res + l, s2, n);
	res[l + n + 1] = '\0';
	return (res);
}
