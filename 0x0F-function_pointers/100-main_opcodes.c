#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: arg counter
 * @argv: arg vector
 */
void main(int argc, char *argv)
{
	if (argc > 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (argv[0] < 0)
	{
		printf("Error\n");
		exit(2);
	}
}
