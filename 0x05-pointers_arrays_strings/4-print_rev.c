#include "main.h"
/**
 * print_rev - yes
 * @s: rev string
 */
void print_rev(char *s)
{
	char c;

	c = *s;
	*s = '\0';
	for (; *s != c; s--)
		_putchar(*s);
}
