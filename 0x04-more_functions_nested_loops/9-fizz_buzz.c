#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int x;
	int t, f;

	for (x = 1; x < 101; x++)
	{
		t = x % 3;
		f = x % 5;
		if (!t)
			printf("Fizz");
		if (!f)
			printf("Buzz");
		if (t && f)
			printf("%i", x);
		if (x != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
