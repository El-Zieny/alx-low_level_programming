#include "main.h"
/**
 * append_text_to_file - check the code
 * @filename: yes
 * @text_content: to be appended
 * Return: 1 if success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fd;
	int chck;

	if (!filename || !text_content)
		return (-1);
	fd = fopen(filename, "a");
	if (!fd)
		return (-1);
	chck = fprintf(fd, "%s", text_content);
	if (chck < 0)
		return (-1);
	fclose(fd);
	return (1);
}
