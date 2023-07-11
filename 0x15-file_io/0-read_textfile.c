#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and prints it to stdout
 * @filename: a file pointer to the text file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	ssize_t x, c;
	char *res;

	if (!filename || !letters)
		return (0);
	fd = fopen(filename, "r");
	if (!fd)
		return (0);
	res = malloc(sizeof(char) * (letters + 1));
	if (!res)
	{
		fclose(fd);
		return (0);
	}
	x = fread(res, sizeof(char), letters, fd);
	if (x <= 0)
	{
		free(res);
		fclose(fd);
		return (0);
	}
	res[x] = '\0';
	c = fwrite(res, sizeof(char), x, stdout);
	free(res);
	fclose(fd);
	if (c != x)
		return (0);
	return (x);
}
