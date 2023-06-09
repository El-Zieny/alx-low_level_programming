#include <stdlib.h>
#include <string.h>
/**
 * create_array - check the code
 * @size: size
 * @c: charachter
 * Return: Always NULL (success)
 */
char *create_array(unsigned int size, char c)
{
	char *arr = '\0';

	if (!size)
		return ('\0');
	arr = malloc(sizeof(c) * size);
	if (arr)
		memset(arr, c, sizeof(c) * size);
	return (arr);
}
