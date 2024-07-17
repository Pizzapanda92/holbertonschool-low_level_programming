#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings followed by a new line.
 *
 * @separator: The string to be printed between the strings.
 *
 * @n: The number of strings passed to the function.
 *
 * @...: A variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *total;
	unsigned int i;
	va_list ap;


	va_start(ap, n);

	for (i = 0; i < n; i++)
	{

		total = va_arg(ap, char *);


		if (total == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", total);
		}

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(ap);
}
