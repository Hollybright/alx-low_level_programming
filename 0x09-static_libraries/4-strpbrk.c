#include "main.h"

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input value
 *
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int u;

	while (*s)
	{
		for (u = 0; accept[u]; u++)
		{
			if (*s == accept[u])
				return (s);
		}
	s++;
	}

	return ('\0');
}
