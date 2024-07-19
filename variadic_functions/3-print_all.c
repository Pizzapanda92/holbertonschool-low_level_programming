#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - Prints a character
 * @ap: The va_list containing the character to print
 *
 * Return: void
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_integer - Prints an integer
 * @ap: The va_list containing the integer to print
 *
 * Return: void
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_float - Prints a float
 * @ap: The va_list containing the float to print
 *
 * Return: void
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_string - Prints a string
 * @ap: The va_list containing the string to print
 *
 * Return: void
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all - Prints anything according to the given format
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    /**
     * struct sp_t - Struct to map a format specifier to a print function
     * @specifi: The format specifier
     * @print_func: The function to print the argument
     */
	sp_t spt[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_list ap;
	int format_index = 0, specifier_index;
	char *separator = "";

	va_start(ap, format);

	while (format && format[format_index])
	{
		specifier_index = 0;
		while (spt[specifier_index].specifi)
		{
			if (format[format_index] == spt[specifier_index].specifi)
			{
				printf("%s", separator);
				spt[specifier_index].print_func(ap);
				separator = ", ";
				break;
			}
			specifier_index++;
		}
		format_index++;
	}
	va_end(ap);
	printf("\n");
}
