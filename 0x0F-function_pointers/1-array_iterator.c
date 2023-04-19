#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints each array
 * @array: array print
 * @size: elements to print
 * @action: regular pointer to print
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array == NULL || action == NULL)
		return;

	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}
