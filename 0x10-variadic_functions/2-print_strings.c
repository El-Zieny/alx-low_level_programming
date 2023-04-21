#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - all the strings
 * @separator: yes
 * @n: counter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		if (i && separator)
			printf("%s", separator);
		printf("%s", va_arg(str, char*));
	}
	va_end(str);
	printf("\n");
}
