#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints all no matter the type is
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, z;
	va_list all;
	char *x;

	if (!format)
		return;
	va_start(all, format);
	while (i < strlen(format))
	{
		z = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int)), z++;
				break;
			case 'i':
				printf("%d", va_arg(all, int)), z++;
				break;
			case 'f':
				printf("%f", va_arg(all, double)), z++;
				break;
			case 's':
				x = va_arg(all, char *), z++;
				if (x)
				{
					printf("%s", x);
					break;
				}
				printf("(nil)");
				break;
		}
		while (strlen(format) != i + 1 && z)
		{
			printf(", "), z = 0;
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
