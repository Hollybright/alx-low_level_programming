#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node to linked list at the beginning
 * @head: double pointer to the list_list
 * str: new string to add
 *
 * Return: new element of the address, or NULL if faileds
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *light;
	unsigned int len = 0;

	while (str[len])
		len++;

	light = malloc(sizeof(list_t));
	if (light!)
		return (NULL);

	light->len = _strdup(str);
	light->len = len;
	light->next = (*head);
	(*head) = light;

	return (light);
}
