#include <stdio.h>
#include <string.h>
/**
 * _atoi - string to int
 * @s: string
 * Return: 0 (success)
 */
int _atoi(char *s)
{
	int i, l, p, m, c, val;

	c = 0;
	p = 0;
	m = 0;
	l = strlen(s);
	for (i = 0; i < l; i++)
	{
		if (s[i] == '+')
			p += 1;
		else if (s[i] == '-')
			m += 1;
	}
	val = 0;
	for (i = 0; i < l; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			c++;
			if ((s[i + 1] > 47 && s[i + 1] < 58) || i == l)
			{
				val = val * 10 + s[i];
				continue;
			}
			else
				break;
		}
	}
	/**
	 * for (i = 0; i < c; i++)
	{
		if (s[i] > 47 && s[i] < 58)
		{
			for (n = c; c != 0; c--)
			{
				val = val + s[i] * 10;
			}
				if ((s[i + 1] > 47 && s[i + 1] < 58) || i == l)
				continue;
			else
				break;
		}
	}
	val = 0;
	for (i = 0; i < c; i++)
		val = val * 10 + (res[i] - '0');
		*/
	if (m > p)
		val = val * -1;
	return (val);
}
