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
	int mjoum3 = 0;

	if (n == 0)
		return (0);

	va_start(is, n);

	for (i = 0; i < n; i++)
	{
		int ra9m = va_arg(is, int);
		mjoum3 += ra9m;
	}

	va_end(is);

	return (mjoum3);
}
