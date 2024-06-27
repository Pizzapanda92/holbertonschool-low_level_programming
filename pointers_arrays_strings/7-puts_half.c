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

	for (length = 0; str[length] != '\0'; length++)
	{

	}
	for (moit = 0; moit < (length / 2)-1 ; moit++)
	{
	}

	for (; moit != length ; moit++)
	{
		_putchar (str[moit]);
	}
	_putchar ('\n');
}
