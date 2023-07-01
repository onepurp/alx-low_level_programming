#include "lists.h"

/**
 * list_len - #
 *
 * @h: #
 *
 * Return: #
 */

size_t list_len(const list_t *h)
{
	size_t toul = 0;

	while (h != NULL)
	{
		toul++;
		h = h->next;
	}

	return (toul);
}

