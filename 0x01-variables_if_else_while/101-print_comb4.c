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

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b+1; c < 10; c++)
			{
				puchar('0' + a);
				puchar('0' + b);
				puchar('0' + c);
				if(!(a == 7 && b == 8 && c==9))
				{
					Puchar(44);
					puchar(32);
				}
			}
		}
	}
	puchar('\n');
	return (0);
}
