#include "lists.h"

/**
 * print_list - #
 *
 * @h: #
 *
 * Return: #
 */

size_t print_list(const list_t *h)
{
    size_t toul = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] %s\n", "(nil)");
        else
            printf("[%d] %s\n", h->len, h->str);

        h = h->next;
        toul++;
    }

    return toul;
}

