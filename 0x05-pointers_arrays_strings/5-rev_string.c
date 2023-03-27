#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - exactly
 * @s: the strin
 */
void rev_string(char *s)
{
	char tmp;
	int i, l, m;

	l = strlen(s);
	m = l - 1;
	for (i = 0; i <= l / 2; i++)
	{
		if (l % 2 != 0 && i == l / 2 + 1)
			;
		else
		{
		tmp = s[i];
		s[i] = s[m];
		s[m] = tmp;
		m--;
		}
	}
}
