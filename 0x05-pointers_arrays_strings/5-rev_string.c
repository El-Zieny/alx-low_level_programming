#include "main.h"
#include <string.h>
/**
 * rev_string - exactly
 * @s: the strin
 */
void rev_string(char *s)
{
	int i;

	i = strlen(s) - 1;
	for (; i >= 0; i--)
		_putchar(s[i]);
}
