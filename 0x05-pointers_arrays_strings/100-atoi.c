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
/**	for (i = 0; i < l; i++)
	{
		if (s[i] == '+')
			p += 1;
		else if (s[i] == '-')
			m += 1;
	}
	*/
	val = 0;
	for (i = 0; i < l; i++)
	{
		if (s[i] == '+')
			p += 1;
		else if (s[i] == '-')
			m += 1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			c++;
			val = val * 10 + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
			{
				break;
			}
			if ((i + 1) == l)
				break;
		}
	}
	if (m % 2)
		val = val * -1;
	return (val);
}
