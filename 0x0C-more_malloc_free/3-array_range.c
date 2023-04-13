#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: manimum range of values
 * @max: maximum range of value
 *
 * Return: new array pointer
 */

int *array_range(int min, int max)
{
	int *k;
	int l, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	k = malloc(sizeof(int) * size);

	if (k == NULL)
		return (NULL);

	for (l = 0; min <= max; l++)
		k[l] = min++;

	return (k);
}
