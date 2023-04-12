#include <string.h>
/**
 * _strdup - check the code
 * @str: string
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *dup;
	int i;

	if (!str)
		return ('\0');
	dup = malloc(sizeof(str) * strlen(str));
	for (i = 0; i < strlen(str); i++)
		dup[i] = str[i];
	return (dup);
}
