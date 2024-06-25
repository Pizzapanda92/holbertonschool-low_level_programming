#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a : valeur
 * @b : valeur
 *
 */

void swap_int(int *a, int *b)

{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
