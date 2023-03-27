#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * startint with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;

	int t = 0;

	char *g = str;
	int o;
	while (*g != '\0')
	{
		g++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	}
		_putchar(str[0]);
	}
	}
	_putchar('\n');
}
