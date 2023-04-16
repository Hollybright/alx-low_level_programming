#include "main.h"

/**
 * _memcpy - function that copies memory
 * @dest: memory where is stored
 * @src:memory where is copied
 * @n: numbers of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int y = n;

	for (; b < y; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}
