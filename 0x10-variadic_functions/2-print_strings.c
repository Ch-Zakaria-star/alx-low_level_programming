#include "variadic_functions.h"

/**
  * print_strings - print a list of strings
  * @separator: characters used to delimit
  * @n: nmber of items to print
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	char *str;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(num, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(num);
}
