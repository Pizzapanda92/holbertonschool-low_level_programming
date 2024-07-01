#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 *
 * @s: Pointer to the start of the memory block to be filled.
 * @b: The value (byte) to fill the memory block with.
 * @n: The number of bytes to be set to the value.
 *
 * Return: Pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
