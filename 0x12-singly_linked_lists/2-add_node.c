#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - #
 *
 * @head: #
 *
 * @str: #
 *
 * Return: #
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = strlen(str);
	n->next = *head;
	*head = n;

	return (n);
}

