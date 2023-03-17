#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;
	int CHR;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (CHR = 'A'; CHR <= 'Z'; CHR++)
		putchar(CHR);

	putchar('\n');
	return (0);
}
