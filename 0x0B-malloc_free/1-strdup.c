#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup- #
 * @str: #
 * Return: #
 */

char *_strdup(char *str)
{
	int toul = 0;
	char *dup;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}



	while (toul[str] != 0)
	{
		toul++;
	}

	dup = malloc (sizeof(toul + 1) * sizeof(char));

	if (dup != NULL)
	{
		for (x = 0; x <= toul; x++)
		{
			dup[x] = str[x];
		}
	}

	return (dup);


}
