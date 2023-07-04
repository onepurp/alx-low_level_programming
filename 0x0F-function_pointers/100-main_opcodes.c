#include <stdio.h>
#include <stdlib.h>

/**
 * main - #
 *
 * @argc: #
 *
 * @argv: #
 *
 * Return: #
 *
 */

int main(int argc, char *argv[])
{
	int es, i;
	char *r;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	es = atoi(argv[1]);

	if (es < 0)
	{
		printf("Error\n");
		return (2);
	}

	r = (char *)main;

	for (i = 0; i < es; i++)
	{
		if (i == es - 1)
		{
			printf("%02hhx\n", r[i]);
			break;
		}
		printf("%02hhx ", r[i]);
	}
	return (0);
}

