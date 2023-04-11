#include <stdio.h>
/**
 * main - check the code
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	(void) argv;
	if (argc == 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		if (!(argv[i] >= 0 && argv[i] <= 9))
		{
			printf("Error\n");
		}
	}
	return (0);
}
