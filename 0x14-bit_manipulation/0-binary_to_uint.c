#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - converts a binary string to unsigned int
 * @b: the binary string to be converted
 * Return: 0 if fail the res otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res, bl, x;

	res = 0;
	bl = strlen(b);
	if (b == NULL)
		return (0);
	for (x = 0; x < bl; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		switch (b[x])
		{
			case '1':
				if (x)
					res = res << 1;
				res += 1;
				break;
			case '0':
				if (x)
					res = res << 1;
				break;
		}
	}
	return (res);
}
