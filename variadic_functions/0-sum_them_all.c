#include <stdarg.h>
#include <stdio.h>


/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: The sum of all parameters. If n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; ++i)
		total += va_arg(ap, int);

	va_end(ap);

	return (total);
}
