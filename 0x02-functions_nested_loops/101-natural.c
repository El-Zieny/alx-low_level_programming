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
	for (n = 0; n < 10; n += 3)
		t += n;
	for (m = 0; m < 10; m += 5)
		f += m;
	res = t + f;
	printf("%d\n", res);
	return (0);
}
