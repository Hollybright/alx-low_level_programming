#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Numbers to be printed, and will be followed up by new line.
 * @n: Integers numbers to be passed to function.
 * @...: Numbers of variable to be printed.
 * @separator: The string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list Nature;
	unsigned int index;

	va_start(Nature, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(Nature, int));

		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(Nature);
}
