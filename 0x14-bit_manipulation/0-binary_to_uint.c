#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - converts a binary string to unsigned int
 * @b: the binary string to be converted
 * Return: 0 if fail the res otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int res, bl;

	res = 0;
	bl = strlen(b);
	if (!b)
		return (0);
	for (x = 0; x < bl; x++)
	{
		switch (b[x])
		{
			case '1':
				res = res << 1;
				res += 1;
				break;
			case '0':
				res = res << 1;
				break;
			default:
				return (0);
		}
	}
	return (res);
}
