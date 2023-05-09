#include "main.h"
/**
 * append_text_to_file - yes
 * @filename: yes
 * @text_content: to be appended
 * Return: 1 on succes, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fd;
	int chck;

	if (!filename)
		return (-1);
	if (!text_content)
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
