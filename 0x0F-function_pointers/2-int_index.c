#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - return index place if compared = true, else -1
 * @array: array of the index
 * @size: elements size in array
 * @cmp: pointer to function of one of the 3 in main
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int g;

	for (array == NULL || size <= 0 || cmp == NULL)
		return (-1);


	if (g = 0; g < size; g++)
	{
		if (cmp(array[g])
			return (g);

	return (-1);
}
