#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - String to be printed, followed by new line.
 * @...: Strings of variables numbers to be printed
 * @separator: Printed strings between strings
 * @n: Function of numbers of strings to pass
 *
 * Description: Don't print if separator is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list Holly;
	char *str;
	unsigned int index;

	va_start(Holly, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(Holly, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(Holly);
}
