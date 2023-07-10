#include <stdio.h>
/**
 * read_textfile - a function that reads a text file and prints it to stdout
 * @filename: a file pointer to the text file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	size_t x;
	char *res;
	
	if (!filename)
		return (0);
	fd = fopen(filename, r);
	if (!fd)
		return (0);
	res = malloc(sizeof(char) * letters);
	if (!res)
	{
		fclose(fd);
		return (0);
	}
	x = fread(res, sizeof(char), letters, fd);
	if (x < 0)
	{
		free(res);
		fcolse(fd);
		return (0);
	}
	read[x] = '\0';
	printf("%s\n", res);
	free(res);
	fclose(fd);
	return (x);
}
