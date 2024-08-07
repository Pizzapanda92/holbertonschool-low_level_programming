#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to be modified.
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (!((*n >> index) & 1))
	{
		*n += 1UL << index;
		return (1);
	}
	return (-1);
}
