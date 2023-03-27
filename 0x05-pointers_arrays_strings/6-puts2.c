#include "main.h"
/**
 * puts2 - jumps
 * @str: the string
 */
void puts2(char *str)
{
	int i, l;

	l = strlen(str) - 1;
	for (i = 0; i <= l; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
