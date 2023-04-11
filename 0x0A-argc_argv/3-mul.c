#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char *argv[])
{
	int mult, i;

	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
}
