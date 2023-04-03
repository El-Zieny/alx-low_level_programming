/**
 * _strchr - check the code
 * @s: the string
 * @c: the char to be located
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	if (c == '\0')
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			char *a = &s[i];
			return (a);
		}
	}
		return (0);
}
