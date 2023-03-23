#include "main.h"

/**
 * print_most_numbers - print number except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char f;

	for (f = '0' ; f <= '9' ; f++)
	{
		if (!(f == '2' || f == '4'))
			_putchar(f);
	}
	_putchar('\n');
}
