#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a' ; ch != 'q' && ch != 'e' && ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
