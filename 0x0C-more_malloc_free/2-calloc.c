#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times b is copy
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


/**
 * *_calloc - allocate memory for array
 * @nmemb: number of element
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = malloc(size * nmemb);

	if (y == NULL)
		return (NULL);

	_memset(y, 0, nemeb * size);

	return (y);
}
