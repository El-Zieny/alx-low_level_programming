#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - check the code
 * @s: the string to be reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(++s);
	_putchar(*--s);
}
