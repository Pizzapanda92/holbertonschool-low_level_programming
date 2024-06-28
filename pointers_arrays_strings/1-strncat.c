#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *
 * @dest : destinoatiion
 * @src : source
 * @n: The maximum number of bytes from src to append.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	*dest = '\0';

	return (temp);
}
