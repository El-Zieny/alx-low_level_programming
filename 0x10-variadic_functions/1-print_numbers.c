#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: yes
 * @n: counter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int i;

	if (!separator || !n)
		return;
	va_start(pn, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pn, int));
		if (n > i + 1)
			printf("%s", separator);
	}
	va_end(pn);
	printf("\n");
}
