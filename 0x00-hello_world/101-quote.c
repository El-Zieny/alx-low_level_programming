#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 1 (success)
 */
int main(void)
{
	int x = 0;
	char array[] = {'a', 'n', 'd', ' ', 't', 'h',
		'a', 't', ' ', 'p', 'i', 'e', 'c',
		'e', ' ', 'o', 'f', ' ', 'a', 'r',
		't', ' ', 'i', 's', ' ', 'u', 's',
		'e', 'f', 'u', 'l', '"', ' ', '-',
		' ', 'D', 'o', 'r', 'a', ' ', 'K',
		'o', 'r', 'p', 'a', 'r', ',',
		' ', '2', '0', '1', '5', '-', '1',
		'0', '-', '1', '9'};

	for (; x < 58; x++)
		putchar(array[x]);
	putchar('\n');
	return (1);
}
