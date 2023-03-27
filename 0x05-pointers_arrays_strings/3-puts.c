#include "main.h"
/**
 * _puts - puts
 * @str: string
 */
void _puts(char *str)
{
	int c;

	c = 0
	for (; str != '0'; str++)
	{
		_putchar(*(str + c));
		c += 1;
	}
}
