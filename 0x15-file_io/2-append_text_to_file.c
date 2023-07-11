#include "main.h"
/**
 * append_text_to_file - check the code
 * @filename: yes
 * @text_content: to be appended
 * Return: 1 if success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text)
{
	int o, w, tl;

	if (!filename)
		return (-1);

	tl = 0;
	while (text != NULL && text[tl] != '\0')
		tl++;

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o ,!text ? "" : text, tl);

	if (o < 0 || w < 0)
		return (-1);

	close(o);

	return (1);
}
