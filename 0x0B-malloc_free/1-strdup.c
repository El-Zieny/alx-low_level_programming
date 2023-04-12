#include <string.h>
#include <stdlib.h>
/**
 * _strdup - check the code
 * @str: string
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i;

	if (!str)
		return ('\0');
	dup = malloc(sizeof(char) * strlen(str));
	if (dup != 0)
	{
		for (i = 0; i < strlen(str); i++)
			dup[i] = str[i];
	}
	return (dup);
}
