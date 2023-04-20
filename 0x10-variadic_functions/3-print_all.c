#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Print all printable
 * @format: Types of argument list passed to function
 */

void print_all(const char * const format, ...)
{
	int w = 0;
	char *str, *sep = "";

	va_list Bright;

	va_start(Bright, format);

	if (format)
	{
		while (format[w])
		{
			switch (format[w])
			{
				case 'c':
					printf("%s%c", sep, va_arg(Bright, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(Bright, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(Bright, double));
					break;
				case 's':
					str = va_arg(Bright, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					w++;
					continue;
			}
			sep = ", ";
			w++;
		}
	}

	printf("\n");
	va_end(Bright);
}
