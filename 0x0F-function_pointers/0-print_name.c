#include <stdio.h>

/**
 * print_name - Entry code for print name using point
 * @name: string to add
 * @f: pointer to function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
