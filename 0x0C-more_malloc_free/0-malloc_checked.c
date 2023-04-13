#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - normal process termination with status value 98
 * @b: allocated memory
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);

	return (x);
}
