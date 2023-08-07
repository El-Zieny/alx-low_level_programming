#include "main.h"
/**
 * read_textfile - read a text file and prints it to the stdout
 * @filename: the file to be read
 * @letters: the number of letters it should read and print
 * Return: the acual number of read and printed letters or 0 if fail
 */
ssize_t read_textfile(const char *filename, ssize_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (!filename || !letters)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o < 0 || r < 0 || w < 0 || r != w)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
