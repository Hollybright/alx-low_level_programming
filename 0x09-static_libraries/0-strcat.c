#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int h;
	int i;

	h = 0;
	while (dest[h] != '\0')
	{
		h++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[h] = src[i];
		h++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
