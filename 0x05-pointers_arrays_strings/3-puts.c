#include "main.h"
/**
 * _puts - puts
 * @str: string
 */
void _puts(char *str)
{
	while(_putchar(*str++))
		;
}
