#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: This program will assign a random number to the variable `n`
 * each time it is executed. It will then print the last digit of `n` and
 * provide a description based on its value.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Extracting the last digit of n */
	last_digit = n % 10;

	printf("Last digit of %d is ", n);

	if (last_digit > 5)
{
	printf("%d and is greater than 5\n", last_digit);
}
	else if (last_digit == 0)
{
	printf("%d and is 0\n", last_digit);
}
	else
{
	printf("%d and is less than 6 and not 0\n", last_digit);
}
	return (0);
}
