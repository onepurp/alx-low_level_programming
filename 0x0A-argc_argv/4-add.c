#include <stdio.h>
#include <stdlib.h>

/**
 * main- #
 * @argc: @
 * @argv: @
 * Return: #
 */

int main(int argc, char **argv)
{
	int x, r;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			r = r + atoi(argv[x]);
		}
		printf("%d\n", r);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
