#include <stdio.h>
#include <stdlib.h>

/**
 * main- #
 * @argc: @
 * @argv: @
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, r = 1;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			r = r * atoi(argv[x]);
		}
		printf("%d\n", r);
	}
	else if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
