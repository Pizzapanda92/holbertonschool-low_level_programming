#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an integer array.
 *
 * @array: Pointer to the integer array.
 *
 * @size: Size of the array.
 *
 * @action: Pointer to the function to be executed on each element ofthe array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
