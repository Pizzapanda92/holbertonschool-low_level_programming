#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * times_table -  function that prints the 9 times table, starting with 0.
 *
 *
 * Return: void.
 */

void times_table(void)
{
	int u;
	int m;
	int r;

	for (u = 0; u < 10; u++)
	{
		for (m = 0; m < 10; m++)
		{
			r = u * m;

			if (r < 10)
			{
				if (m > 0)
				{
					_putchar(' ');
				}
				_putchar('0' + r);
			}
			if (r >= 10)
			{
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}

			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}

