#include <stdio.h>
/*
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	long int x, y, z, res;
	int n, m;

	x = 1;
	y = 2;
	res = y;
	for (n = 0; n < 30; n++)
	{
		z = x + y;
		m = z % 2;
		if (m == 0 && z < 4000000)
			res += z;
		x = y;
		y = z;
	}
	printf("%li\n", res);
	return (0);

}
