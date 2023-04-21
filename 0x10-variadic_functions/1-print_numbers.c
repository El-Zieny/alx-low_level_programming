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

	if (!separator)
		return;
	va_start(pn, n);
	for (i = 0; i < n; i++)
	{
		if (i && separator)
			printf("%s", separator);
		printf("%d", va_arg(pn, int));
	}
	va_end(pn);
	printf("\n");
}
