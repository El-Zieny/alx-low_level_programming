#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * read_textfile - a function that reads a text file and prints it to stdout
 * @filename: a file pointer to the text file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *res;

	if (!filename || !letters)
		return (0);

	res = malloc(letters);
	if (!res)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, res, letters);
	w = write(STDOUT_FILENO, res, r);

	if (r < 0 || o < 0 || r != w || w < 0)
	{
		free(res);
		return (0);
	}

	free(res);
	close(o);

	return (w);
}
