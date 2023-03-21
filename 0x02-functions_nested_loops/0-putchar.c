#include "main.h"
/**
 * main - Entry point
 * Return: Alwasy 0 (success)
 */
int main(void)
{
	char p[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
		_putchar(p[x]);
	_putchar('\n');
	return (0);
}
