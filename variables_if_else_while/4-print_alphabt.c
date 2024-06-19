#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: This program will list the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'e' || ch == 'q')
	putchar(ch);
}
	putchar('\n');
	return (0);
}
