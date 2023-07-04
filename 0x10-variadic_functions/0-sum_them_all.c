#include "variadic_functions.h"

/**
 * print_numbers - #
 *
 * @separator: #
 *
 * @n: #
 *
 * Return: #
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list is;
	unsigned int i;

	va_start(is, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(is, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(is);
}
