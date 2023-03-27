#include "main.h"
/**
 * puts2 - jumps 
 * @str: the string
 */
void puts2(char *str)
{
	int i, l;

	l = sizeof(*str);
	for (i = 0; i < l; i += 2)
		_pitchar(str[i]);
}
