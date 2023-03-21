#include "main.h"
void print_alphabet_x10(void)
{
	int x;
	char a;

	for (x = 0; x < 10; x++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
	return;
}
