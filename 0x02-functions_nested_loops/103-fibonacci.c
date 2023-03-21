#include <stdio.h>
/*
 * main - Entry point
 * Description: sum frapichino even values
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
		if (m == 0 && z < 4000000)
			res += z;
		x = y;
		y = z;
	}
	printf("%li", res);
	printf("%i", m);
	return (0);

}
