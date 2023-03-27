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
	int i, l;

	l = strlen(s);
	for (i = 0; i <= l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l];
		s[l] = tmp;
	}
}
