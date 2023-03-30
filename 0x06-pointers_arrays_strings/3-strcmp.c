#include <string.h>
/**
 * _strcmp - check the code
 * @s1:1st string
 * @s2: string 2
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int i, r, l;

	l = strlen(s1);
	for (i = 0; i < l; i++)
	{
		r = 0;
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
	}
	return (r);
}
