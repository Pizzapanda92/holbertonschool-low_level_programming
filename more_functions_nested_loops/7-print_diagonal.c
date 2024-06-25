#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: num
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int u, m;

	if (n <= 0)
	{
		_putchar ('\n');
	}

	else
	{
		for (u = 0; u < n; u++)
		{
			for (m = 0; m < u; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
