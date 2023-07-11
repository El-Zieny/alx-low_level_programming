#include "main.h"
/**
 * creat_file - check the code
 * @filename: file name
 * @text_content: the content to be written in the created file
 * Return: 1 if success, -1 otherwise
 */
int create_file(const char *filename, char *text)
{
	int o ,w;

	if (!filename)
		return (-1);

	o = open(filename, O_RDWR);
	w = write(o, !text ? "" : text, !text ? 0 : strlen(text);

	if (o < 0 || w < 0)
		return (-1);

	close(o);
	return (1);
}
