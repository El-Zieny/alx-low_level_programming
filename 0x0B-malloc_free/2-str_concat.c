#include <string.h>
/**
 * str_concat - check the code
 * @s1: s1
 * @s2: s2
 * Return: '\0'
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i;

	conc = malloc(strlen(s1) + strlen(s2));
	if (!conc)
		return ('\0');
	for (i = 0; i < strlen(s1); i++)
		conc[i] = s1[i];
	for (i = strlen(s1); i < strlen(s1) + strlen(s2); i++)
		conc[i] = s2[i];
	return (conc);
}
