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
	o = fopen(filename, "r");
	if (!o)
		return (0);
	res = malloc(sizeof(char) * (letters + 1));
	if (!res)
	{
		fclose(o);
		return (0);
	}
	r = fread(res, sizeof(char), letters, o);
	if (x <= 0)
	{
		free(res);
		fclose(o);
		return (0);
	}
	res[x] = '\0';
	w = fwrite(res, sizeof(char), x, STDOUT_FILENO);
	free(res);
	fclose(o);
	if (c != x)
		return (0);
	return (x);
}
