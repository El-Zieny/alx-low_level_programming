/**
 * _memset - check the code
 * @s: adresses
 * @b: cont of bytes
 * @n: num of bytes
 * Return: s adress
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (&s[i]);
}
