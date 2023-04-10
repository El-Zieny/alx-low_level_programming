/**
 * _strpbrk - check the code
 * @s: string
 * @accept: acceptance
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
				return (&s[i]);
		}
	}
	return (0);
}
