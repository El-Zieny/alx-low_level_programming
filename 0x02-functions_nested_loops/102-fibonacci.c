#include <stdio.h>
/**
 * main - check
 * Return: Always 0
 */
int main(void)
{
	long int x;

	for (x = 1; x <= 12586269025; x += x)
	{
		printf("%li", x);
		if (x != 12586269025)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
