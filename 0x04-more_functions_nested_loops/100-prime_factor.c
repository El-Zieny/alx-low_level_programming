#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	int i, c, res;
	long int num;

	num = 612852475143 / 2;
	for (i = 2; i < num; i++)
	{
		if ((num % i) == 0)
		{
			for (c = 2; c < (i / 2); c++)
			{
				if ((i % c) == 0)
					break;
				else
					res = i;
			}
		}
	}
	printf("%i\n", res);
	return (0);
}
