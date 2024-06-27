#include "main.h"

/**
 * puts_half - function that reverses a string.
 *
 * @str: pointeur to chaine we print
 *
 */

void puts_half(char *str)
{
	int length;
	int moit;
	int i;

	for (length = 0; str[length] != '\0'; length++)
	{
	}


	if (length % 2 == 0)
	{
		moit = length / 2;
	}
	else
	{
		moit = (length - 1) / 2 + 1;
	}
	for (i = moit; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
