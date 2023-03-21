#include <stdio.h>
/**
 * main - check
 * Return: Always 0
 */
int main(void)
{
	long int x;
	long int y;
	long int z;
	int n;

	for (n = 0; n < 50; n++)
	{
		x = 1;
		y = 2;
		z = x+y;
		if (x == 1)
		{
			printf("%li", x);
			printf("%li", y);
		}
		printf("%li", z);
		x = y;
		y = z;
	}
	return (0);
}
