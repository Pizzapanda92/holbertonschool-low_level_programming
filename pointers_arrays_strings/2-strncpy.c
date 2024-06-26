#include "main.h"
/**
 * _strncpy - function that copies a string.
 *
 * @dest : destination
 * @src: source
 * @n : nombre
 *
 * Return: temp
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	dest[i++] = '\0';

	return (dest);
}
