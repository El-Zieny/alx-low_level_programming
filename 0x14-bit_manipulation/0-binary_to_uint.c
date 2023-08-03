#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - check the code
 * @b: a pointer to a striong of the 1's and 0's to be converted to u-int
 * Return: the converted number if succes or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res, x;

	res = 0;

	if (!b)
		return (0);
	for (x = 0; x < strlen(b); x++)
	{
	if (!b[x] || (b[x] != '0' && b[x] != '1'))
		return (0);
	}

	for (; *b; b++)
	{
	if (res == 0 && *b == 1)
		res = 1;
	else if (*b == '1')
	{
		res = res << 1;
		res = res | 1;
	}
	else if (*b == '0' && res > 0)
		res = res << 1;
	}
	return (res);
}
