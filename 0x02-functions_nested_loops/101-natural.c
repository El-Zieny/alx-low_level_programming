#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int t, f;
	int n, m;
	int res;

	t = 0;
	f = 0;
	for (n = 0; n < 10 / 3; n++)
		t += 3 * n;
	for (m = 0; m < 10 / 5; m++)
		f += 5 * m;
	res = t + f;
	printf("%d\n", res);
	return (0);
}
