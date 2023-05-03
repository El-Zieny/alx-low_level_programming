#include <stdio.h>
/**
 * main - print the file comiled name
 * Return: always 1 (success)
 */
int main(void)
{
	const char *s = __FILE__;

	printf("%s\n", s);
	return (1);
}
