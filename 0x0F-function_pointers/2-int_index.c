#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - return index place if compare = true, else -1
 * @size: elements size in array
 * @array: array
 * @cmp: pointer ti func of one of the 3 in main
 *
 * Return: 0
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int g;

	for (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (g = 0; g < size; g++)
	{
		if (cmp(array[g]))
			return (g);
	}
	return (-1);
}
