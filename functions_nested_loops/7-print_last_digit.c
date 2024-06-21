#include "main.h"

/**
 * print_last_digit -printe last digit of number
 * @r: variable entier
 * Return: Always 0.
 */

int print_last_digit(int r)

{
	int last_digit = 0;

	last_digit = r % 10;
	if (last_digit < 0)

	{
		last_digit =  last_digit * -1;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
