#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if ((c * 10 + d) > (a * 10 + b))
					{
						putchar('0' + a);
						putchar('0' + b);
						putchar(' ');
						putchar('0' + c);
						putchar('0' + d);
						if (!(a == 9 && (a + b + c + d) == 35))
						{
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
