#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int t, n, b = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
		for (n = 0; av[t][n]; n++)
			k++;
	}
	k += ac;

	str = malloc(sizeof(char) * k + 1);

	if (str == NULL)
		return (NULL);

	for (t = 0; t < ac; t++)
	{
		for (n = 0; av[t][n]; n++)
		{
			str[b] = av[t][n];
			b++;
		}
		if (str[b] == '\0')
		{
			str[b++] = '\n';
		}
	}

	return (str);
}
