#include "main.h"
#include <string.h>
/**
 * rev_string - exactly
 * @s: the strin
 */
void rev_string(char *s)
{
	char c[strlen(s)];
	int i, l;
	int x;

	l = 0;
	i = strlen(s) - 1;
	for (x = 0; x <= i; x++)
		c[x] = s[x];
	for (; i >= 0; i--)
	{
		s[i] = c[l];
		l += 1;
	}
}
