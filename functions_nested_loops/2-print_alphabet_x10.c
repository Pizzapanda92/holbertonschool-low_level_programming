#include "main.h"
/**
 * print_alphabet_x10 - function that prints the alphabet
 * in lowercase, followed by a new line 10 times
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char num = 0;

	while (num <= 9)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		num++;
	}
}
