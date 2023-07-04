#include "variadic_functions.h"

/**
 * print_strings - #
 *
 * @separator: #
 *
 * @n: #
 *
 * Return: #
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list is;
	unsigned int i;
	char *oin;

	va_start(is, n);

	for (i = 0; i < n; i++)
	{
		oin = va_arg(is, char *);

		if (oin == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", oin);
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(is);
}
