#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that two string are concatenated
 * @s1: char one
 * @s2: char two
 * @n: unsigned int
 *
 * Return: if the function fails, return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int e, f, g;
	char *s;

	if (s1 == NULL)
	{
		e = 0;
	}
	else
	{
		for (e = 0; s1[e]; ++e)
			;
	}
	if (s2 == NULL)
	{
		f = 0;
	}
	else
	{
		for (f = 0; s2[f]; ++f)
			;
	}
	if (f > n)
		f = n;

	s = malloc(sizeof(char) * (e + f + 1));
	if (s == NULL)
		return (NULL);
	for (g = 0; g < e; g++)
		s[g] = s1[g];
	for (g = 0; g < f; g++)
		s[g + e] = s2[g];
	s[e + f] = '\0';

	return (s);
}
