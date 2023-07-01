#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - #
 *
 * @head: #
 *
 * @str: #
 *
 * Return: #
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = strlen(str);
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
	}
	else
	{
		list_t *c = *head;
		while (c->next != NULL)
			c = c->next;
		c->next = n;
	}

	return (n);
}

