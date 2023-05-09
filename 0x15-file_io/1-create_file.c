#include "main.h"
/**
 * create_file - yes
 * @filename: yes
 * @text_content: the content to be written in the created file
 * Return: 1 in success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fd;

	if (!filename)
		return (-1);
	fd = fopen(filename, "w");
	if (!fd)
		return (-1);
	fwrite(text_content, 1, strlen(text_content), fd);
	fclose(fd);
	chmod(filename, S_IRUSR | S_IWUSR);
	return (1);
}
