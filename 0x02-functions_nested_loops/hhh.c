#include <stdio.h>
int main(void)
{
	int m;
	int n;
	int x;
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (x = 0; x <= 10; x++)
	{
		for (n = 0; n < 10; n++)
		{
			if (n == 0)
				printf("%d", m);
			else if (n == 9)
			{
				if (m > 9)
					printf(", %d", m);
				else
					printf(",  %d", m);
			}



			m = a[x] * a[n];
			printf("%d, ", m);
			if (m == 0)
			{

			}
		}
		putchar('\n');
	}
	return (0);
}
