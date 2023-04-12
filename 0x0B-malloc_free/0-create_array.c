#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array size and assign char c
 * @size: size of array
 * @c: char to assign
 * Descriptionn: creat array of size and assign char c
 *
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int y;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		str[y] = c;

	return (str);
}
