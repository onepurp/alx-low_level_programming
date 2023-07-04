#include "variadic_functions.h"

/**
 * sum_them_all - #
 *
 * @separator: #
 *
 * @n: #
 *
 * Return: #
 */

void sum_them_all(const char *separator, const unsigned int n, ...)
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
