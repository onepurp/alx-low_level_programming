#include "variadic_functions.h"


int sum_them_all(const unsigned int n, ...)
{
	va_list is;
	unsigned int i;
	int mjou3 = 0;

	if (n == 0)
		return 0;

	va_start(is, n);

	for (i = 0; i < n; i++)
	{
		int ra9m = va_arg(is, int);
		mjou3 += ra9m;
	}

	va_end(is);

	return mjou3;
}

