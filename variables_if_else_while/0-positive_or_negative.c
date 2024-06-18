#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: This program will assign a random number to the variable `n`
 * each time it is executed. It will then print whether the number stored
 * in the variable `n` is positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n < 0)
{
	printf("%d is negative\n", n);
}
	else if (n > 0)
{
	printf("%d is positive\n", n);
}
	else
{
	printf("%d is zero\n", n);
}

	return (0);
}
