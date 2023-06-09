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

	va_start(pn, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator)
			printf("%s", separator);
		printf("%d", va_arg(pn, int));
	}
	printf("\n");
	va_end(pn);
}
