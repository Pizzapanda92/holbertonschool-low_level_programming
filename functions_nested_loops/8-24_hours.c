#include "main.h"
/**
 * jack_bauer - function that prints the every mint of jack bauer 24h chrono
 *
 * Return: void.
 */

void jack_bauer(void)

{
	int h = 0;

	while (h <= 23)

	{
		int min = 0;

		while (min <= 59)

		{
			_putchar ('0' + h / 10);
			_putchar ('0' + h % 10);
			_putchar (':'),
				 _putchar ('0' + min / 10);
			_putchar ('0' + min % 10);
			_putchar('\n');
			min++;
		}
		h++;
	}

}
