/**
 * _strchr - check the code
 * @s: the string
 * @c: the char to be located
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i, x, tmp, chck;

	chck = 0;
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			for (x = 0; s[i] != 0; x++)
			{
				tmp = s[i];
				s[x] = tmp;
				i++;
			}
			chck = 1;
			break;
		}
	}
	if (chck)
		return (s);
	else
		return ('\0');
}
