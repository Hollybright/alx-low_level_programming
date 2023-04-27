#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - code to be check
 * @h: list of name
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
