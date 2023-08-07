#include "main.h"
/**
 * main -  a program that copies the content of a file to another file.
 * @ac: arguments counter
 * @av: arguments vector
 * Return: 0 if success
 */
int main(int ac, char **av)
{
	int o, r, w, c;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	o = open(av[1], O_RDONLY);
	r = read(o, buffer, 1024);
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	c = close(o);
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", o);
		exit(100);
	}

	o = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	w = write(o, buffer, r);
	if (w < 0)
	{
		fprintf(stderr, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	c = close(o);
	if (c < 0)
	{
		fprintf(stderr, "Error: Can't close fd %i\n", o);
		exit(100);
	}
	return (0);
}
