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

	x = 1;
	for (n = 0; n < 48; n++)
	{
		if (x == 1)
		{
		y = 2;
		z = x + y;
		printf("%li", x);
		printf("%li", y);
		}
		z = x + y;
		printf("%li", z);
		if (n != 47)
			printf(", ");
		x = y;
		y = z;
	}
	return (0);
}
