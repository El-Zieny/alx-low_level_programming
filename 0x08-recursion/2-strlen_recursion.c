/**
 * _strlen_recursion - return the length of a string
 * @s: the striong
 * Return: it's length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
