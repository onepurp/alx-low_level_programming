#include "lists.h"
#include <stdlib.h>

/**
 * free_list - #
 *
 * @head: #
 *
 */

void free_list(list_t *head)
{
	list_t *c = head;
	list_t *we9t;

	while (c != NULL)
	{
		we9t = c;
		c = c->next;
		free(we9t->str);
		free(we9t);
	}
}

