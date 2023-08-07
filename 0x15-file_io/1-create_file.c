#include "main.h"
/**
 * create_file - creates a file and write a content in it
 * @filename: the name of the file
 * @text_content: the content to be written in the file
 * Return: 1 on siccess, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, w;

	if (!filename)
		return (-1);

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (!text_content)
		w = write(o, "", 0);
	else
		w = write(o, text_content, strlen(text_content));

	if (o < 0 || w < 0)
		return (-1);

	close(o);
	return (1);
}
