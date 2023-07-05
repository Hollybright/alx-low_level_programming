#include "lists.h"

/**
 * print_listnt_listnt - prints all linked list elements
 * @h: linked list of type listnt_t to print
 *
 * Return: number of nodes
 */

size_t print_listnt(const listnt_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
