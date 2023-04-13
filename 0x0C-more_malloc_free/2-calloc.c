#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for @nmemb array and @size bytes
 * @nmemb: allocates memory for array
 * @size: element of size bytes allocation
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);
	if (b == NULL)
		return (NULL);
	for (c = 0; c < (nmemb * size); c++)
		b[c] = 0;
	return (b);
}
