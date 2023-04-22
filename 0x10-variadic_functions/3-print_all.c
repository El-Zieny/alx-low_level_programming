#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints all no matter the type is
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i, fl, z;
	va_list all;
	char *x;

	if (!format)
		return;
	va_start(all, format);
	i = 0;
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
			printf(", ");
			break;
		}
		i++;
	}
	printf("\n");
}
