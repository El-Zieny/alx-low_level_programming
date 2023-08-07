#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file
 * @text: the content to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text)
{
	int o, w;

	if (!filename)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, !text ? "" : text, !text ? 0 : strlen(text));

	if (o < 0 || w < 0)
		return (-1);

	close(o);
	return (1);
}
