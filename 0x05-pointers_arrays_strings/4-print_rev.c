#include "main.h"
#include <string.h>
/**
 * print_rev - yes
 * @s: rev string
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s) - 1;
	for (; i >= 0; i--)
		_putchar(s[i]);
}
