#include "main.h"
#include <string.h>
/**
 * rev_string - exactly
 * @s: the strin
 */
void rev_string(char *s)
{
	char c[];
	int i, l;

	c = s;
	l = 0;
	i = strlen(s) - 1;
	for (; i >= 0; i--)
		s[i] = c[l];
}
