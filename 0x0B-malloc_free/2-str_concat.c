#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *str_concat- #
 * @s1: #
 * @s2: #
 * Return: #
 */

char *str_concat(char *s1, char *s2)
{
	int toul1 = 0, toul2 = 0, x;
	char *c;

	if (s1 != NULL)
	{
		s1 = "\0";
	}
	if (s2 != NULL)
	{
		s2 = "\0";
	}
	while (toul1[s1] != 0)
	{
		toul1++;
	}
	while (toul2[s2] != 0)
	{
		toul2++;
	}
	c = malloc(sizeof(toul1 + toul2) * sizeof(char));
	if (c == 0)
	{
		return (0);
	}
	for (x = 0; x <= toul1 + toul2; x++)
	{
		if (x < toul1)
		{
			c[x] = s1[x];
		}
		else
		{
			c[x] = s2[x - toul1];
		}
	}
	c[x] = '\0';
	return (c);
}
