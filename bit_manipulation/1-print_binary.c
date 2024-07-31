#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted to binary.
 *
 * Description: This function takes an unsigned long integer and prints
 *              its binary representation using _putchar. It does not
 *              use arrays, malloc, the % or / operators.
 */

void print_binary(unsigned long int n)
{
	unsigned long int nav;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	nav = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while ((n & nav) == 0)
	{
		nav >>= 1;
	}

	while (nav > 0)
	{
		if ((n & nav) != 0)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		nav >>= 1;
	}
}
