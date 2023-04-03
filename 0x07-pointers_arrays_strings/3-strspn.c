#include <string.h>
/**
 * _strspn - check the code
 * @s: string
 * @accept: rejected
 * Return: yes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x, l1, l2, f;

	f = 0;
	l1 = strlen(s);
	l2 = strlen(accept);
	for (i = 0; i < l1; i++)
	{
		for (x = 0; x < l2; x++)
		{
			if (s[i] == accept[x])
			{
				f = 1;
				continue;
			}
		}
		if (!f)
			return (i);
		f = 0;
	}
	return (0);
}
