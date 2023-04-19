#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 */
void main(int argc, char *argv)
{
	if (argc > 1)
	{
		printf("Error\n");
		exit(1);
	}
	if (argv[0] < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return;
}
