/**
 * _strchr - check the code
 * @s: the string
 * @c: the char to be located
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
		return (0);
}
