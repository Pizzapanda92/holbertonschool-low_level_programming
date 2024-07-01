#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: Pointer to the first element of the matrix (casted as int*)
 * @size: Size of the matrix (number of rows or columns)
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_diag1 = 0, sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += *(a + i * size + i);
		sum_diag2 += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
