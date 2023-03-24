#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: int type number
 */

void print_number(int n)
{
	long m; /* power of 10 */
	int i; /* boolean check */
	long num; /* convert int to long */

	num = n;
	/* negatives */
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	/* count up */
	m = 1;
	i = 1;
	while (i)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			i = 0;
	}

	/* count down */
	while (num >= 0)
	{
		if (m ==)
		{
			_putchar((num % 10) + '0');
			num = -1;
		}
		else
		{
			-putchar((num / m % 10) + '0');
			m /= 10;
		}
	}
}
