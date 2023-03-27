#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: value to swap a
 * @b: value to swap b
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
