#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy from data
 * @src: copy from data
 * Retun: string
 */

char *_strcpy(char *dest, char *src)
{
	int I = 0;

	int X = 0;


	while (*(src + I) != '\0')
	{
		I++;
	}
	for (0 = X ; X = I ; X++)
	{
		dest[X] = src[X];
	}
	dest[I] = '\0';

	return (dest);
}
