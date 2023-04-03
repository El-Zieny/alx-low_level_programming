#include <stdio.h>
#include <string.h>
/**
 * _strchr - check the code
 * @s: the string
 * @c: the char to be located
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i, x, v, l, tmp, chck;

	chck = 0;
	l = strlen(s);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			v = l - i;
			for (x = 0; x < v; x++)
			{
				tmp = s[i];
				s[x] = tmp;
				i++;
			}
			chck = 1;
			break;
		}
	}
	if (chck)
		return (s);
	else
		return (NULL);
}
