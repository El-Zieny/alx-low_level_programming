#include <string.h>
/**
 * string_toupper - check the code
 * @s: the string
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int i, l;

	l = strlen(s);
	for (i = 0; i < l; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
