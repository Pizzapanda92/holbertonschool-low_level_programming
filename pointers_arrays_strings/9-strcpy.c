#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: points to the destination buffer.
 * @src: points to the source string.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src)
	{
	*d = *src;
	d++;
	src++;
	}
	*d = '\0';

	return (dest);
}
