#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 *
 * @size: number of #
 * Return: void.
 */

void print_square(int size)
{
	int m, u;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else

			{
			for (m = 0; m < size; m++)
			{
			for (u = 0; u < size; u++)
			{
				_putchar ('#');
			}
			_putchar('\n');
		}
	}
}
