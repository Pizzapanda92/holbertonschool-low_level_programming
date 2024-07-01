#include "main.h"

/**
 * _memcpy - Copies memory area.
 *
 * @dest: Pointer to the destination array where the content is to be copied.
 * @src: Pointer to the source of data to be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination array dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = dest;
	char *b = src;

	while (n)
	{
		*a++ = *b++;
		--n;
	}
	return (dest);
}
