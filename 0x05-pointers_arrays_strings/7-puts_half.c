#include "main.h"
/**
 * puts_half - the 2nd half
 * @str: the whole string
 */
void puts_half(char *str)
{
	int i = strlen(str);

	if (i % 2)
		i = i / 2 + 1;
	else
		i = i / 2;
	for (; i != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
