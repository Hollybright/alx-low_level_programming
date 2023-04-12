#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate new memory space
 * @str: char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *mmm;
	int y, t = 0;

	if (str == NULL)

		return (NULL);
	y = 0;

	while (str[y] != '\0')
		y++;

	mmm = malloc(sizeof(char) * (y + 1));

	if (mmm == NULL)
		return (NULL);

	for (t = 0; str[t]; t++)
		mmm[t] = str[t];

	return (mmm);
}
