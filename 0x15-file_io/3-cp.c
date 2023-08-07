#include "main.h"
/**
 * main -  a program that copies the content of a file to another file.
 * @ac: arguments counter
 * @av: arguments vector
 * Return: 0 if success
 */
int main(int ac, char **av)
{
	int o1, o2, r, w, c1, c2;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	o1 = open(av[1], O_RDONLY);
	r = read(o, buffer, 1024);
	if (r < 0 || o1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	c = close(o);
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(100);
	}
	o2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (o2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	w = write(o, buffer, r);
	if (w < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	c1 = close(o1);
	c2 = close(o2);
	if (c1 < 0 || c2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(100);
	}
	return (0);
}
