#include <string.h>
/**
 * _strstr - check the code
 * @haystack: string
 * @needle: sbstring
 * Return: the rest after the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x, n, val, l1, l2;

	if (*needle == 0)
		return (haystack);
	l1 = strlen(haystack);
	l2 = strlen(needle);
	for (i = 0; i < l1; i++)
	{
		if (haystack[i] == needle[0])
		{
			n = i + 1;
			val = 1;
			for (x = 1; x < l2; x++)
			{
				if (haystack[n] == needle[x])
				{
					n++;
					val++;
				}
			}
			if (val == l2)
				return (&haystack[i]);
		}
	}
	return ('\0');

}
