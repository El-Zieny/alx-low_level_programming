#include <string.h>
/**
 * cap_string - check the code
 * @s: the string
 * Return: cap-ed string
 */
char *cap_string(char *s)
{
	char sprt[] = {' ', '\t', '\n', ',', ';', '.',
	       '!', '?', '"', '(', ')', '{', '}'};
	int l, i, x;

	l = strlen(s) - 1;
	for (i = 0; i < l; i++)
	{
		for (x = 0; x < 13; x++)
		{
			if (s[i] == sprt[x])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
		}
		if (s[i] == '\t')
			s[i] = ' ';
	}
	return (s);
}
