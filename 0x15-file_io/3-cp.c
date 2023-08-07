#include "main.h"
/**
 * errs - checks for errors
 * @file_from: to copy from
 * @file_to: to copy to
 * @av: yes
 */
void errs(int file_from, int file_to, char **av)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to < 0)
	{
		fprintf(stderr, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}
/**
 * main -  a program that copies the content of a file to another file.
 * @ac: arguments counter
 * @av: arguments vector
 * Return: 0 if success
 */
int main(int ac, char **av)
{
	int file_from, file_to, r, w, c;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	errs(file_from, file_to, av);

	r = 1024;
	while (r == 1024)
	{
	r = read(file_from, buffer, 1024);
	if (r < 0)
		errs(0, -1, av);
	w = write(file_to, buffer, r);
	if (w < 0)
		errs(0, -1, av);
	}
	c = close(file_from);
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}

	c = close(file_to);
	if (c < 0)
	{
		fprintf(stderr, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}

	return (0);
}
