#include <stdio.h>

/**
 * main- #
 * @argc: #
 * @argv: #
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
