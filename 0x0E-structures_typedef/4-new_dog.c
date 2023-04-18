#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - lenth of string
 * @s: evalute string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/*
 * *_strcpy - copies pointer string by scr
 * @dest: pointer to the buffer
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, k;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (k = 0; k < len; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}
