#include <string.h>
#include <stdlib.h>
/**
 * str_concat - check the code
 * @s1: s1
 * @s2: s2
 * Return: '\0'
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned int i, x, l1, l2;

	if (s1)
		l1 = strlen(s1);
	if (s2)
		l2 = strlen(s2);
	conc = malloc(l1 + l2 + 1);
	if (!conc)
		return ('\0');
	for (i = 0; i < l1; i++)
		conc[i] = s1[i];
	x = 0;
	for (i = l1; i < l1 + l2; i++)
	{
		conc[i] = s2[x];
		x++;
	}
	conc[l1 + l2] = '\0';
	return (conc);
}
