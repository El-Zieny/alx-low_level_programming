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
	if (n > m)
		n = m;
	res = malloc(n + l + 1);
	if (!res)
		return ('\0');
	if (s1)
		memcpy(res, s1, l);
	if (s2)
		memcpy(res + l, s2, n);
	res[strlen(res)] = '\0';
	free(t);
	return (res);
}
