#include <stdio.h>
/*
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	long int x, y, z, res;
	int n, m;

	x = 1;
	y = 2;
	for (n = 0; n < 30; n++)
	{
		z = x + y;
		m = z % 2;
		if (!m)
			res += z;
		x = y;
		y = z;
	}
	printf("%li", res);
	return (0);
}
