#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a : poiteur
 * @n : variable
 */

void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
		continue;
		printf(", ");
	}
	printf("\n");
}
