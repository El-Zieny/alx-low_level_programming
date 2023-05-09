#include "main.h"
/**
 * read_textfile - check the code
 * @filename: yes
 * @letters: the number of letters to be read
 * Return: the actual number of letters that read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *read;
	FILE *fd;
	int x;

	if (!filename)
		return (0);
	fd = fopen(filename, "r");
	if (fd == 0)
		return (0);
	read = malloc(sizeof(char) * letters);
	if (!read)
	{
		fclose(fd);
		return (0);
	}
	x = fread(read, 1, letters, fd);
	if (x < 0)
	{
		free(read);
		fclose(fd);
		return (0);
	}
	free(read);
	fclose(fd);
	return (x);
}
