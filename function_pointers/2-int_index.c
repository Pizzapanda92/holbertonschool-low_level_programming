#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in
 * an array based on a comparison function.
 *
 * @array: The array of integers to search.
 *
 * @size: The number of elements in the array.
 *
 * @cmp: A pointer to the function used to compare values.
 *
 * Return: The index of the first element for which
 * the cmp function does not return 0,
 * or -1 if no element matches or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);


	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
