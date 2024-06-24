#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 * Return: void.
*/

void more_numbers(void)

{
	int l = 0;

	while (l <= 9)

	{
		int n = 0;

		while (n <= 14)

		{
			if (n >= 10)
			{
				_putchar('1');
				_putchar('0' + (n - 10));
			}
			else
			{
				_putchar('0' + n);
			}
			n++;
		}
		_putchar('\n');
		l++;
	}
}
