#include <stdio.h>
#include <string.h>
/**
 * _atoi - string to int
 * @s: string
 * Return: 0 (success)
 */
int _atoi(char *s)
{
	int i, l, m, val, min;

	m = 0;
	l = strlen(s);
	val = 0;
	min = -2147483648;
	for (i = 0; i < l; i++)
	{
		if (s[i] == '-')
			m += 1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			val = val * 10 + (s[i] - '0');
			if (val == 214748364 && s[i + 1] == 8)
			{
				return (min);
			}
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
			if ((i + 1) == l)
				break;
		}
	}
	if (m % 2 && val != min)
		val = val * -1;
	return (val);
}
