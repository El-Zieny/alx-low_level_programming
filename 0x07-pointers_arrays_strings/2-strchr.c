#include <string.h>
/**
 * _strchr - check the code
 * @s: the string
 * @c: the char to be located
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i, l;

	l = strlen(s);
	if (c == '\0')
		return (&s[l]);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
		return (0);
}
