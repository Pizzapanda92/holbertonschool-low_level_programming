#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int ou;

	ou = n ^ m;

	while (ou)
	{
		if (ou & 1)
		{
			bits++;
		}
	ou >>= 1;
	}
	return (bits);
}
