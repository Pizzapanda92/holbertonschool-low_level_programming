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
	int n;

	for (n = 0; n < 10; n++)
{
	printf("%d", n);
}
	putchar('\n');
	return (0);
}
