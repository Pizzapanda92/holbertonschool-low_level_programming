#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 * Return: void.
*/

void more_numbers(void)

{
	int i, j;
	char numbers[] = "01234567891011121314";
	int length = 20;

		for (i = 0; i < 10; i++) 
		{
		for (j = 0; j < length; j++) 
		{
		_putchar(numbers[j]);
		}
	_putchar('\n');
	}
}
