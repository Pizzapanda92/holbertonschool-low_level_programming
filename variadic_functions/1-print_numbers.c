#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */




void print_numbers(const char *separator, const unsigned int n, ...)
{
	int total = 0;
	unsigned int i;
	va_list ap;


	if (separator == NULL)
	{	
		;
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		total = va_arg(ap, int);
		printf("%d", total);

			if (separator && i < n - 1)
			{
				printf("%s", separator);
			}
	}
	printf("\n");

	va_end(ap);

}
