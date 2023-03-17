#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar('0' + n);
			putchar('0' + m);
			if (!(n == 8 && m == 9))
			{
			putchar(44);
			putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
