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

	if (!filename)
		return (0);
	fd = fopen(filename, "r");
	if (fd < 1)
		return (0);
	read = malloc(sizeof(char) * letters + 1);
	if (!read)
		return (0);
	letters = fread(read, 1, letters, fd);
	read[letters] = '\0';
	printf("%s", read);
	free(read);
	fclose(fd);
	return (letters);
}
