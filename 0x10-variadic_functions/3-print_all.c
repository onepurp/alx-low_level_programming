#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list is;
	unsigned int i = 0;
	int c = 0;
	char *oin;

	va_start(is, format);

	while (format && format[i])
	{
		if (c)
			printf(", ");

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(is, int));
			c = 1;
			break;
		case 'i':
			printf("%d", va_arg(is, int));
			c = 1;
			break;
		case 'f':
			printf("%f", va_arg(is, double));
			c = 1;
			break;
		case 's':
			oin = va_arg(is, char *);
			c = 1;
			if (!oin)
				printf("(nil)");
			else
				printf("%s", oin);
			break;
		}

		i++;
	}

	printf("\n");
	va_end(is);
}
