/**
 * _memcpy - check the code
 * @dest: destination
 * @src: source
 * @n: number of chars to cpy
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
