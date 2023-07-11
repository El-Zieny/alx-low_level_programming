#include "main.h"
/**
 * creat_file - check the code
 * @filename: file name
 * @text_content: the content to be written in the created file
 * Return: 1 if success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fd;
	unsigned int c;

	if (!filename)
		return (-1);

	fd = fopen(filename, "w");
	if (!fd)
		return (-1);

	c = fwrite(text_content, 1, strlen(text_content), fd);
	if (c != strlen(text_content))
		return (-1);

	fclose(fd);
	chmod(filename, S_IRUSR | S_IWUSR);
	return (1);
}
