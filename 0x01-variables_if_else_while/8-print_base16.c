#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
		putchar('%x', n);
	putchar('\n');
	return (0);
}
