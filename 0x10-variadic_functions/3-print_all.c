#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints all no matter the type is
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i, fl;
	va_list all;

	fl = strlen(format);
	va_start(all, format);
	i = 0;
	while (i < fl)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				break;
			case 's':
				printf("%s", va_arg(all, char *));
				break;
		}
		if (format[i] == 'c' || format[i] == 'i' ||format[i] == 'f' ||format[i] == 's')
			if (fl != i + 1)
				printf(", ");
		i++;
	}
	printf("\n");
}
