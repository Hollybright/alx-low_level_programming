#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - The sum of parameters to be returned
 * @...: The sum of variable parameters to be calculated
 * @n: The number ofparameters to be pass to function
 *
 * Return: if n == 0 - 0.
 * otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list light;
	unsigned int k, sum = 0;

	va_start(light, n);

	for (k = 0; k < n; k++)
		sum += va_arg(light, int);

	va_end(light);

	return (sum);
}
