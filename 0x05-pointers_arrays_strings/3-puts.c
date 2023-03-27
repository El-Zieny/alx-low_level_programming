#include "main.h"
/**
 * _puts - puts
 * @str: string
 */
void _puts(char *str)
{
	for (; (*str) != '\0'; str++)
		_putchar(*str);
}
