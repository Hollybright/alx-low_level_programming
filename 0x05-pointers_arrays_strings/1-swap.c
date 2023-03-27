#include "main.h"

/**
 * swap_int - the value to be swap
 * @a: value 1
 * @b: value 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
