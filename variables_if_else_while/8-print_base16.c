#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: This main function generates a loop that iterates from 0 to 9,
 * printing each integer value on the same line,
 * followed by a newline character.
 * Return: 0 if the program exits successfully
 */
int main(void)
{
	char ch;
	char num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}

	putchar('\n');
	return (0);
}
