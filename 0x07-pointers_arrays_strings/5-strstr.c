#include <string.h>
/**
 * _strstr - check the code
 * @haystack: string
 * @needle: sbstring
 * Return: the rest after the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x, n, val, l;

	l = strlen(needle);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			n = i + 1;
			val = 1;
			for (x = 1; needle[x] != '\0'; x++)
			{
				if (haystack[n] == needle[x])
				{
					n++;
					val++;
				}
			}
			if (val == l)
				return (&haystack[i]);
		}
	}
	return ('\0');

}
