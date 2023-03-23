#include "main.h"
/**
 * more_numbers - more numbers
 */
void more_numbers(void)
{
	int i, c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
