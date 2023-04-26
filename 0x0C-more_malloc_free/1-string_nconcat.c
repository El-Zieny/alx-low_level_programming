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

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	l = strlen(s1);
	m = strlen(s2);
	if (n > m)
		n = m;
	res = malloc(n + l + 1);
	if (!res)
		return ('\0');
	memcpy(res, s1, l);
	memcpy(res + l, s2, n);
	free (res);
	res[strlen(res) + 1] = '\0';
	return (res);
}
