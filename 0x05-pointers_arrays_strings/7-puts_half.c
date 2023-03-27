#include "main.h"
#include <string.h>
/**
 * puts_half - the 2nd half
 * @str: the whole string
 */
void puts_half(char *str)
{
	int i = strlen(str), c;

	if (i % 2)
		c = i / 2 + 1;
	else
		c = i / 2;
	for (; c < i; c++)
		_putchar(str[c]);
	_putchar('\n');
}
