#include "main.h"
#include <stdlib.h>

/**
 * *create_array- #
 * @size: #
 * @c: #
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (arr == 0)
	{
		return (NULL);
	}

	while (size--)
	{
		arr[size] = c;
	}

	return (arr);
}
